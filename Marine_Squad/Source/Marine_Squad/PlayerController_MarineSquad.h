// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "HUD_MarineSquad.h"
#include "PlayerCamera_MarineSquad.h"
#include "PlayerController_MarineSquad.generated.h"

/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API APlayerController_MarineSquad : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerController_MarineSquad();
	AHUD_MarineSquad* HUDPtr;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	//called everyframe
	virtual void Tick(float DeltaTime) override;

private:
	void SetupInputComponent();
//unit selection
	void SelectionStarted();
	void SelectionEnded();

//Unit Movement
	void MoveCommandStarted();
	void MoveCommandEnded();
	void MoveCommand();
	bool Moving;
	UPROPERTY(VisibleAnywhere)
	TArray<AParentUnit*> SelectedUnits;

//Player Camera
	void MoveCamera();
	UPROPERTY(VisibleAnywhere)
	float Margin = 15.0f;
	UPROPERTY(VisibleAnywhere)
	APlayerCamera_MarineSquad* CAMPtr;
	int32 ScreenSizeX;
	int32 ScreenSizeY;
};
