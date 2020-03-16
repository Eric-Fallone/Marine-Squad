// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "ParentUnit.h"
#include "BaseAbilityChooseUnit.generated.h"

/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API ABaseAbilityChooseUnit : public AGameplayAbilityTargetActor
{
	GENERATED_BODY()

public:	

	ABaseAbilityChooseUnit();
	//virtual void Tick(float DeltaSeconds) override;
	virtual void StartTargeting(UGameplayAbility* Ability) override;

	virtual void ConfirmTargetingAndContinue() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "UnitSelect")
	float Range; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitSelect)
	AParentUnit* CastingUnit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UnitSelect)
	AParentUnit* TargetedUnit;

};
