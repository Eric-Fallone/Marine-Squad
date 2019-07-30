// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
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
private:
	//unit stats
	UPROPERTY(EditAnywhere)
	float HealthMax = 100;
	UPROPERTY(EditAnywhere)
	float HealthCurrent;
	UPROPERTY(EditAnywhere)
	float MoveSpeed = 300;
	UPROPERTY(EditAnywhere)
	float RotationSpeed;
};
