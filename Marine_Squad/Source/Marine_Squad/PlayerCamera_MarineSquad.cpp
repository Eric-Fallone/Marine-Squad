// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCamera_MarineSquad.h"

// Sets default values
APlayerCamera_MarineSquad::APlayerCamera_MarineSquad()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerCamera_MarineSquad::MoveCamera(FVector CamDir)
{
	AddActorWorldOffset(CamDir * CameraMoveSpeed);
}
