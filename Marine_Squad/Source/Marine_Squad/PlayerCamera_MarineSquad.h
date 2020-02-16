// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCamera_MarineSquad.generated.h"

UCLASS()
class MARINE_SQUAD_API APlayerCamera_MarineSquad : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerCamera_MarineSquad();

//protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	void MoveCamera(FVector CamDir);
	UPROPERTY(EditAnywhere)
	float CameraMoveSpeed = 25.0f;
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
