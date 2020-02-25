// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "HUD_MarineSquad.h"
#include "PlayerCamera_MarineSquad.h"
#include "MoveIndicator.h"
#include "ParentUnit.h"
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

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMoveIndicator> IndicatorToSpawn;
	AMoveIndicator* MoveIndicator;

	//unit spawns classes 
	UPROPERTY(EditAnywhere)
	TSubclassOf<AParentUnit> UnitOneType;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AParentUnit> UnitTwoType;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AParentUnit> UnitThreeType;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AParentUnit> UnitFourType;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AParentUnit> UnitFiveType;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	//called everyframe
	virtual void Tick(float DeltaTime) override;

private:
	void SetupInputComponent();
	AHUD_MarineSquad* HUDPtr;

//Player Input

	void MoveCommandStarted();
	void MoveCommandEnded();
	void MoveCommand();

	void QueCommandStarted();
	void QueCommandStopped();
	void StopCommand();
	void AttackMoveCommand();

//unit selection

	void SelectionStarted();
	void SelectionEnded();

	void SelectUnit(int UnitNum);
	
	void SelectAllUnitsCommand();
	void SelectUnitOneCommand();
	void SelectUnitTwoCommand();
	void SelectUnitThreeCommand();
	void SelectUnitFourCommand();
	void SelectUnitFiveCommand();
//Unit Abilities

	void AbilityOneCommand();
	void AbilityTwoCommand();
	void AbilityThreeCommand();
	void AbilityFourCommand();

//Selection

	bool Moving;
	UPROPERTY(VisibleAnywhere)
	TArray<AParentUnit*> SelectedUnits;
	UPROPERTY(VisibleAnywhere)
	TArray<AParentUnit*> AllUnits;

//Player Camera

	void MoveCamera();
	UPROPERTY(EditAnywhere)
	float Margin = 15.0f;
	UPROPERTY(VisibleAnywhere)
	APlayerCamera_MarineSquad* CAMPtr;
	int32 ScreenSizeX;
	int32 ScreenSizeY;

};
