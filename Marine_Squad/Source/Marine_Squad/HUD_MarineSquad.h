// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ParentUnit.h"
#include "HUD_MarineSquad.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWorldPositionOfMouseDelegate, float, x, float, y, float, z);
/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API AHUD_MarineSquad : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FWorldPositionOfMouseDelegate WorldPositionOfMouse;

	virtual void DrawHUD() override;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	FVector GetMouseWorldPos();

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void GetActorAtMousePos();

	FVector2D InitialPoint;
	FVector2D CurrentPoint;

	FVector2D GetMousePos2D();

	bool bStartSelecting = false;

	UPROPERTY(VisibleAnywhere)
	TArray <AParentUnit*> FoundUnits;
};
