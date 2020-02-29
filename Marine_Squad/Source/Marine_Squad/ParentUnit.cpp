// Fill out your copyright notice in the Description page of Project Settings.


#include "ParentUnit.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
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
	if(isDead){
		return;
	}
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


void AParentUnit::Attack(AParentUnit* BasicTarget)
{
	//get unit damage
	//deal damage to target 
	BasicTarget->TakeDamage(GetAttackDamage());
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


void AParentUnit::StartSelect()
{
	if(isDead){
		return;
	}
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


void AParentUnit::FocusUnit( bool isFocused )
{
	if(isFocused == true)
	{
		isFocused = false;
		//change selection indicator to default selector
	}
	else
	{
		isFocused = true;
		//change selection indicator to focused selector
	}
}


void AParentUnit::KillSelf()
{	
	StopSelect();
	isDead = true;
	//set blackboard controller isDead to true
	AAIController * ai = Cast<AAIController>(GetController());
	if(ai){
		UBlackboardComponent * BB = Cast<UBlackboardComponent>(ai->GetBlackboardComponent());	

		if(BB)
		{
			BB->SetValueAsBool("IsUnitDead",true);
		}	
	}
	//play animation of charater dying (todo)


	//show grave marker
	if(GraveMarkerModel)
	{
		GraveMarkerModel->SetVisibility(true);
	}
	
}


void AParentUnit::CastAbility(int ability)
{
	 UE_LOG(LogTemp, Warning, TEXT("Unit casted - %i"), ability)
}


float AParentUnit::GetAttackDamage()
{
	float DamageOut = AttackDamage;
	return DamageOut;
}