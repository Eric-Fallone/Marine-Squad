// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCamera_MarineSquad.h"

// Sets default values
APlayerCamera_MarineSquad::APlayerCamera_MarineSquad()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCamera_MarineSquad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCamera_MarineSquad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCamera_MarineSquad::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

