// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UnitSelectorCircle.generated.h"

/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API UUnitSelectorCircle : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
		class UButton *MyCoolButton;

	protected:
		virtual bool Initialize() override; // override this, its like beginplay but for UUserWidgets

	private:
		UFUNCTION()
		void DoAction();
};
