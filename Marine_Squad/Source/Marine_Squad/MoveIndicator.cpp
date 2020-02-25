// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveIndicator.h"

// Sets default values
AMoveIndicator::AMoveIndicator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoveIndicator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveIndicator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMoveIndicator::ShowIndicatorAt(FVector LocationToAppear)
{
	SetActorLocation(LocationToAppear);
}