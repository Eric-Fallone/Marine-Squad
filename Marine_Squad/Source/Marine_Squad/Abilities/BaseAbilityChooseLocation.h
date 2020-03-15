// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "ParentUnit.h"
#include "BaseAbilityChooseLocation.generated.h"

class UDecalComponent; 
class USceneComponent;
/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API ABaseAbilityChooseLocation : public AGameplayAbilityTargetActor
{
	GENERATED_BODY()
	

public:
	ABaseAbilityChooseLocation();
	virtual void Tick(float DeltaSeconds) override;
	virtual void StartTargeting(UGameplayAbility* Ability) override;

	virtual void ConfirmTargetingAndContinue() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "GroundSelect")
	float Radius; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "GroundSelect")
	float Range; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=GroundSelect)
	AParentUnit* CastingUnit;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=GroundSelect)
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=GroundSelect)
	UDecalComponent* Decal; 

	USceneComponent* RootComp;


};
