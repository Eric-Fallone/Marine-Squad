// Fill out your copyright notice in the Description page of Project Settings.


#include "ParentUnit.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AParentUnit::AParentUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AParentUnit::BeginPlay()
{
	Super::BeginPlay();
	//sets current health to max hp if not set from editor
	if(HealthCurrent == 0)
	{
		HealthCurrent = HealthMax;
	}
	HealthPercent = (HealthCurrent / HealthMax);
	//sets movement speed
	GetCharacterMovement()->MaxWalkSpeed = MoveSpeed;
	//sets widget component

}

// Called every frame
void AParentUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AParentUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AParentUnit::Move(FVector MoveLocation)
{
	AAIController * ai = Cast<AAIController>(GetController());
	ai->MoveToLocation(MoveLocation,-1.0f,true,true,false,true,0,true);
}


void AParentUnit::AttackMove(FVector MoveLocation)
{
	AAIController * ai = Cast<AAIController>(GetController());
	ai->MoveToLocation(MoveLocation,-1.0f,true,true,false,true,0,true);
}


void AParentUnit::StopMoving()
{
	AAIController * ai = Cast<AAIController>(GetController());
	ai->MoveToLocation(GetActorLocation(),-1.0f,true,true,false,true,0,true);
}


void AParentUnit::Attack(AParentUnit* target)
{
	
}


void AParentUnit::TakeDamage(float DamageTaken)
{
	HealthCurrent = HealthCurrent - DamageTaken;
	HealthPercent = (HealthCurrent / HealthMax);
	//UE_LOG(LogTemp, Warning, TEXT("Setting HPPercent to %f"),HealthPercent)
	if (HealthCurrent <= 0){
		KillSelf();
	}
}


void AParentUnit::KillSelf()
{
	Destroy();
}


void AParentUnit::StartSelect()
{
	if(SelectionCircle)
	{
		SelectionCircle->SetVisibility(true,true);
	}
}


void AParentUnit::StopSelect()
{
	if(SelectionCircle)
	{
		SelectionCircle->SetVisibility(false,true);
	}
}