// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingSprite.h"

#include "Components/Image.h"

bool UFloatingSprite::Initialize()
{
    bool Success = Super::Initialize();
    if (!Success) return false;

    if (!ensure(Sprite)) { return false; } // check for nullptrs

    return true;
}
