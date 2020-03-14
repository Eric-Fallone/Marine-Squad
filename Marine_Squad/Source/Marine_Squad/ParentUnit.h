// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WidgetComponent.h"
#include "FloatingSprite.h"
#include "AbilitySystemInterface.h"
#include "Abilities/Marine_AbilitySystemComponent.h"
#include "Abilities/BaseGameplayAbility.h"
#include "Abilities/MarineAttributeSet.h"

#include "ParentUnit.generated.h"

UCLASS()
class MARINE_SQUAD_API AParentUnit : public ACharacter , public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AParentUnit();
	//ability system variables and functions

	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;
	virtual void OnRep_Controller() override;

	UMarine_AbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	//
	//this is needed to pass to baseability choose location
	//APlayerController controller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities)
	UMarine_AbilitySystemComponent* AbilitySystemComponent;


protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities)
	UMarineAttributeSet* AttributeSet;

	/** Apply the startup gameplay abilities and effects */
	void AddStartupGameplayAbilities();

	/** Abilities to grant to this character on creation. These will be activated by tag or event and are not bound to specific inputs */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Abilities)
	TArray<TSubclassOf<UBaseGameplayAbility>> GameplayAbilities;

	//Abilties set to a specifc key q,w,e,r
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Abilities)
	TArray<TSubclassOf<UBaseGameplayAbility>> KeyBoundAbilities;


	//UBaseGameplayAbility QAbility;
	//UBaseGameplayAbility WAbility;
	//UBaseGameplayAbility EAbility;
	//UBaseGameplayAbility RAbility;

	UPROPERTY()
	int32 bAbilitiesInitialized;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//command methods
	UFUNCTION(BlueprintCallable, Category = "MoveFunction")
	void Move(FVector MoveLocation);

	UFUNCTION(BlueprintCallable, Category = "MoveFunction")
	void AttackMove(FVector MoveLocation);

	UFUNCTION(BlueprintCallable, Category = "MoveFunction")
	void StopMoving();

	//UFUNCTION(BlueprintCallable, Category = "AttackFunction")
    //void Attack(class AParentUnit* BasicTarget);

	//UFUNCTION(BlueprintCallable, Category = "AttackFunction")
    //void ChangeHealth(float DamageTaken);

	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
    void StartSelect();

	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
    void StopSelect();

	// 0 non player controlled
	// 1 or more is player number
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=PlayerTeam)
	int TeamNumber;

	//Unit Stats


	//used for the HP bar element
	float HealthPercent; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitTarget)
	AParentUnit* CurrentTarget;

	//unit selection

	void FocusUnit( bool isFocused );
	bool isFocusedUnit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitTarget)
	UWidgetComponent* SelectionCircle; //set from blueprint


	//unit dealth 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitDeath)
	bool isDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitDeath)
	USceneComponent* GraveMarkerModel; //set from blueprint

	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
    void KillSelf();

	
	//GetValueFuntions
	// 0 - q 
	// 1 - w
	// 2 - e
	// 4 - r
	UFUNCTION(BlueprintImplementableEvent ,Category = "BasicFunction")
	void CastAbility(int abilityslot);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent ,Category = "BasicFunction")
	void CastAbilityHelper(int ability);


	//UFUNCTION(BlueprintCallable, Category = "BasicUnitGetMethod")
    //float GetAttackDamage();
    UFUNCTION()
	void OnHealthChange(float Health, float MaxHealth);
};
