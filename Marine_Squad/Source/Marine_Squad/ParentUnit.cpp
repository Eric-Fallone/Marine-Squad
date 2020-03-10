// Fill out your copyright notice in the Description page of Project Settings.


#include "ParentUnit.h"
#include "AbilitySystemGlobals.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AParentUnit::AParentUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UMarine_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	//AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UMarineAttributeSet>(TEXT("AttributeSet"));

	bAbilitiesInitialized = false;
}


///game play abilites 
UMarine_AbilitySystemComponent* AParentUnit::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


void AParentUnit::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Initialize our abilities
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		AddStartupGameplayAbilities();
	}
}

void AParentUnit::UnPossessed()
{

}


void AParentUnit::OnRep_Controller()
{
	Super::OnRep_Controller();

	// Our controller changed, must update ActorInfo on AbilitySystemComponent
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RefreshAbilityActorInfo();
	}
}


void AParentUnit::AddStartupGameplayAbilities()
{
	check(AbilitySystemComponent);
	
	if (Role == ROLE_Authority && !bAbilitiesInitialized)
	{
		// Grant abilities, but only on the server	
		for (TSubclassOf<UBaseGameplayAbility>& StartupAbility : GameplayAbilities)
		{
			FGameplayAbilitySpecDef SpecDef = FGameplayAbilitySpecDef();
			SpecDef.Ability = StartupAbility;
			FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(SpecDef, 1);
			AbilitySystemComponent->GiveAbility( AbilitySpec );
		}
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		/*
		// Now apply passives
		for (TSubclassOf<UGameplayEffect>& GameplayEffect : PassiveGameplayEffects)
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
			if (NewHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent);
			}
		}

		AddSlottedGameplayAbilities(); */

		bAbilitiesInitialized = true;
	}
}
///////

// Called when the game starts or when spawned
void AParentUnit::BeginPlay()
{
	Super::BeginPlay();
	AttributeSet->OnHealthChange.AddDynamic(this, &AParentUnit::OnHealthChange);

}

// Called every frame
void AParentUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AParentUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AParentUnit::Move(FVector MoveLocation)
{
	if(isDead){
		return;
	}
	AAIController * ai = Cast<AAIController>(GetController());
	ai->MoveToLocation(MoveLocation,-1.0f,true,true,false,true,0,true);
}


void AParentUnit::AttackMove(FVector MoveLocation)
{
	AAIController * ai = Cast<AAIController>(GetController());
	ai->MoveToLocation(MoveLocation,-1.0f,true,true,false,true,0,true);
}


void AParentUnit::StopMoving()
{
	AAIController * ai = Cast<AAIController>(GetController());
	ai->MoveToLocation(GetActorLocation(),-1.0f,true,true,false,true,0,true);
}

/*
void AParentUnit::Attack(AParentUnit* BasicTarget)
{
	//get unit damage
	//deal damage to target 
	BasicTarget->ChangeHealth(GetAttackDamage());
}
*/
/*
void AParentUnit::ChangeHealth(float DamageTaken)
{
	HealthCurrent = HealthCurrent - DamageTaken;
	HealthPercent = (HealthCurrent / HealthMax);
	//UE_LOG(LogTemp, Warning, TEXT("Setting HPPercent to %f"),HealthPercent)
	if (HealthCurrent <= 0){
		KillSelf();
	}
}
*/

void AParentUnit::StartSelect()
{
	if(isDead){
		return;
	}
	if(SelectionCircle)
	{
		SelectionCircle->SetVisibility(true,true);
	}
}


void AParentUnit::StopSelect()
{
	if(SelectionCircle)
	{
		SelectionCircle->SetVisibility(false,true);
	}
}


void AParentUnit::FocusUnit( bool isFocused )
{
	if(isFocused == true)
	{
		isFocused = false;
		//change selection indicator to default selector
	}
	else
	{
		isFocused = true;
		//change selection indicator to focused selector
	}
}


void AParentUnit::KillSelf()
{	
	StopMoving();
	StopSelect();
	isDead = true;
	//set blackboard controller isDead to true
	AAIController * ai = Cast<AAIController>(GetController());
	if(ai){
		UBlackboardComponent * BB = Cast<UBlackboardComponent>(ai->GetBlackboardComponent());	

		if(BB)
		{
			BB->SetValueAsBool("IsUnitDead",true);
		}	
	}
	//play animation of charater dying (todo)


	//show grave marker
	if(GraveMarkerModel)
	{
		GraveMarkerModel->SetVisibility(true);
	}
	
}


void AParentUnit::CastAbility(int ability)
{
	 UE_LOG(LogTemp, Warning, TEXT("Unit casted - %i"), ability)
}

void AParentUnit::OnHealthChange(float Health, float MaxHealth)
{
	if(MaxHealth == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Warning max health was set to 0"))
		MaxHealth = 1;
	}
	HealthPercent = Health / MaxHealth ; 
	if(Health == 0)
	{
		KillSelf();
	}
}
/*
float AParentUnit::GetAttackDamage()
{
	float DamageOut = AttackDamage;
	return DamageOut;
}
*/