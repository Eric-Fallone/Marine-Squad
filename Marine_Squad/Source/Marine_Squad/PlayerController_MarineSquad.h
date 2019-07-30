// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "HUD_MarineSquad.h"
#include "PlayerCamera_MarineSquad.h"
#include "PlayerController_MarineSquad.generated.h"

UENUM(BlueprintType)
enum class ECommandsEnum : uint8
{
	VE_Move 	UMETA(DisplayName="Move"),
	VE_Rotate 	UMETA(DisplayName="Rotate"),
	VE_Attack 	UMETA(DisplayName="Attack"),
};

/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API APlayerController_MarineSquad : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerController_MarineSquad();

	UPROPERTY(EditAnywhere)//, BlueprintReadWrite, Category="Enum")
	ECommandsEnum CommandEnum;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	//called everyframe
	virtual void Tick(float DeltaTime) override;

private:
	void SetupInputComponent();
	AHUD_MarineSquad* HUDPtr;
//unit selection
	void SelectionStarted();
	void SelectionEnded();

//Player Input
	void MoveCommandStarted();
	void MoveCommandEnded();
	void MoveCommand();
	void QueCommandStarted();

//Selection
	bool Moving;
	UPROPERTY(VisibleAnywhere)
	TArray<AParentUnit*> SelectedUnits;

//Player Camera
	void MoveCamera();
	UPROPERTY(EditAnywhere)
	float Margin = 15.0f;
	UPROPERTY(VisibleAnywhere)
	APlayerCamera_MarineSquad* CAMPtr;
	int32 ScreenSizeX;
	int32 ScreenSizeY;
};
