// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "HUD_MarineSquad.h"
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

private:

	void SetupInputComponent();

	void SelectionStarted();
	void SelectionEnded();

	void MoveCommandStarted();

	UPROPERTY(VisibleAnywhere)
	TArray<AParentUnit*> SelectedUnits;

};
