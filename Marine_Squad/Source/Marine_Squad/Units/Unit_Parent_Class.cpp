// Fill out your copyright notice in the Description page of Project Settings.


#include "Unit_Parent_Class.h"

// Sets default values
AUnit_Parent_Class::AUnit_Parent_Class()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUnit_Parent_Class::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnit_Parent_Class::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUnit_Parent_Class::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

