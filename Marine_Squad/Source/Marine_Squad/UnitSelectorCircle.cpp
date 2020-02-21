// Fill out your copyright notice in the Description page of Project Settings.


#include "UnitSelectorCircle.h"

#include "Components/Button.h"

bool UUnitSelectorCircle::Initialize()
{
    bool Success = Super::Initialize();
    if (!Success) return false;

    if (!ensure(MyCoolButton)) { return false; } // check for nullptrs
    MyCoolButton->OnClicked.AddDynamic(this, &UUnitSelectorCircle::DoAction);

    return true;
}

void UUnitSelectorCircle::DoAction()
{
    UE_LOG(LogTemp, Warning, TEXT("Button is pressed"))
}