// Fill out your copyright notice in the Description page of Project Settings.

#include "Abilities/MarineAttributeSet.h"
#include "Abilities/Marine_AbilitySystemComponent.h"
#include "ParentUnit.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"

UMarineAttributeSet::UMarineAttributeSet()
	: Health(1.f)
	, MaxHealth(1.f)
	, Mana(0.f)
	, MaxMana(0.f)
	, AttackPower(1.0f)
	, DefensePower(1.0f)
	, MoveSpeed(1.0f)
	, SightRange(600.0f)
	, AttackRange(500.0f)
	, Damage(0.0f)
{
}

void UMarineAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(UMarineAttributeSet, Health);
	//DOREPLIFETIME(UMarineAttributeSet, MaxHealth);
	//DOREPLIFETIME(UMarineAttributeSet, Mana);
	//DOREPLIFETIME(UMarineAttributeSet, MaxMana);
	//DOREPLIFETIME(UMarineAttributeSet, AttackPower);
	//DOREPLIFETIME(UMarineAttributeSet, DefensePower);
	//DOREPLIFETIME(UMarineAttributeSet, MoveSpeed);
}


void UMarineAttributeSet::OnRep_Health()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, Health);
}

void UMarineAttributeSet::OnRep_MaxHealth()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, MaxHealth);
}

void UMarineAttributeSet::OnRep_Mana()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, Mana);
}

void UMarineAttributeSet::OnRep_MaxMana()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, MaxMana);
}

void UMarineAttributeSet::OnRep_AttackPower()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, AttackPower);
}

void UMarineAttributeSet::OnRep_DefensePower()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, DefensePower);
}

void UMarineAttributeSet::OnRep_MoveSpeed()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, MoveSpeed);
}

void UMarineAttributeSet::OnRep_SightRange()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, SightRange);
}

void UMarineAttributeSet::OnRep_AttackRange()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMarineAttributeSet, AttackRange);
}

void UMarineAttributeSet::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UMarineAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMaxHealthAttribute())
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());
	}
}

void UMarineAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if(Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<UProperty>(UMarineAttributeSet::StaticClass(),GET_MEMBER_NAME_CHECKED(UMarineAttributeSet, Health)  ) )
	{
		Health.SetCurrentValue( FMath::Clamp( Health.GetCurrentValue(), 0.0f , MaxHealth.GetCurrentValue() ));
		Health.SetBaseValue( FMath::Clamp(Health.GetBaseValue(), 0.f, MaxHealth.GetCurrentValue() ));
		UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), Health.GetCurrentValue() );
		
		OnHealthChange.Broadcast( Health.GetCurrentValue(), MaxHealth.GetCurrentValue() );
	}
}
