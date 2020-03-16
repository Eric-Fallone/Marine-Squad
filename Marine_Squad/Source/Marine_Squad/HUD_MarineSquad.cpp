// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD_MarineSquad.h"
#include "DrawDebugHelpers.h"

#define OUT


FVector2D AHUD_MarineSquad::GetMousePos2D()
{
    float PosX;
    float PosY;
    GetOwningPlayerController()->GetMousePosition(OUT PosX, OUT PosY);

    return FVector2D(PosX, PosY);
}

FVector AHUD_MarineSquad::GetMouseWorldPos()
{
    FHitResult HitResult; 

    bool TryTrace = GetOwningPlayerController()->GetHitResultUnderCursor(ECC_Visibility, true, OUT HitResult);

    if(TryTrace)
    {        
        //DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 200, 12, FColor(20, 100, 240), false, -1, 0, 2);
        UE_LOG(LogTemp, Warning, TEXT("Found Unit: %s"), *HitResult.Actor->GetName())
    }

    return FVector( HitResult.ImpactPoint );
}


AActor* AHUD_MarineSquad::GetActorAtMousePos()
{
    FHitResult HitResult; 

    bool TryTrace = GetOwningPlayerController()->GetHitResultUnderCursor(ECC_Visibility, true, OUT HitResult);

    if(TryTrace)
    {        
        DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 50, 12, FColor(20, 100, 240), true, 1, 0, 2);
        UE_LOG(LogTemp, Warning, TEXT("Found Unit: %s"), *HitResult.Actor->GetName())
    }
    return Cast<AActor>(HitResult.Actor);
}


//Same as tick from actors
void AHUD_MarineSquad::DrawHUD()
{
    //when true it draws the selection rectangle 
    //when false it snap shots 
    if(bStartSelecting)
    {
        CurrentPoint = GetMousePos2D();
        DrawRect(
            FLinearColor(0,0,1,.15f),
            InitialPoint.X, InitialPoint.Y,//initial x and y
            CurrentPoint.X - InitialPoint.X,//Width
            CurrentPoint.Y - InitialPoint.Y//Height
            );
        FoundUnits.Empty();
        GetActorsInSelectionRectangle<AParentUnit>(
            InitialPoint,
            CurrentPoint,
            OUT FoundUnits,
            false,
            false
        );
        //removes non player controlled actors
        for (size_t i = 0; i < FoundUnits.Num(); i++)
        {
            if(FoundUnits[i]->TeamNumber != 1)
            {
                FoundUnits.RemoveAt(i);
            }
        }
    }
}