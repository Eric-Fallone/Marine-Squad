// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FloatingSprite.generated.h"

/**
 * 
 */
UCLASS()
class MARINE_SQUAD_API UFloatingSprite : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
		class UImage *Sprite;

	protected:
		virtual bool Initialize() override; // override this, its like beginplay but for UUserWidgets

};
