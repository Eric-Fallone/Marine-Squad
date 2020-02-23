// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WidgetComponent.h"
#include "FloatingSprite.h"
#include "ParentUnit.generated.h"

UCLASS()
class MARINE_SQUAD_API AParentUnit : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AParentUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//command methods
	void Move(FVector MoveLocation);

	UFUNCTION(BlueprintCallable, Category = "AttackFunction")
    void Attack(class AParentUnit* target);

	UFUNCTION(BlueprintCallable, Category = "AttackFunction")
    void TakeDamage(float DamageTaken);

	UFUNCTION(BlueprintCallable, Category = "BasicFunction")
    void KillSelf();

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
	float MoveSpeed = 300;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitStats)
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitTarget)
	AParentUnit* CurrentTarget;

	//unit selection unit

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitTarget)
	UWidgetComponent* SelectionCircle;
    
};
