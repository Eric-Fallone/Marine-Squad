// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WidgetComponent.h"
#include "FloatingSprite.h"
#include "AbilitySystemInterface.h"
#include "Abilities/Marine_AbilitySystemComponent.h"
#include "Abilities/BaseGameplayAbility.h"
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
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory)
	UMarine_AbilitySystemComponent* AbilitySystemComponent;

	/** Apply the startup gameplay abilities and effects */
	void AddStartupGameplayAbilities();

	/** Abilities to grant to this character on creation. These will be activated by tag or event and are not bound to specific inputs */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Abilities)
	TArray<TSubclassOf<UBaseGameplayAbility>> GameplayAbilities;

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

	UFUNCTION(BlueprintCallable, Category = "AttackFunction")
    void Attack(class AParentUnit* BasicTarget);

	UFUNCTION(BlueprintCallable, Category = "AttackFunction")
    void TakeDamage(float DamageTaken);

	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
    void StartSelect();

	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
    void StopSelect();

	// 0 non player controlled
	// 1 or more is player number
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=PlayerTeam)
	int TeamNumber;

	//Unit Stats

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float SightRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float AttackRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float AttackDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float MagSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float MagTotal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float MagCurrent;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float HealthMax = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float HealthCurrent;

	//used for the HP bar element

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float HealthPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float MoveSpeed =600;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float RotationSpeed;

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
	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
	void CastAbility(int ability);

	UFUNCTION(BlueprintCallable, Category = "BasicUnitGetMethod")
    float GetAttackDamage();
    
};
