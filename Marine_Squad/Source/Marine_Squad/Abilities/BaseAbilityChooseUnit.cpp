// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAbilityChooseUnit.h"
#include "DrawDebugHelpers.h"


ABaseAbilityChooseUnit::ABaseAbilityChooseUnit()
{
  //  PrimaryActorTick.bCanEverTick = true;   

}


void ABaseAbilityChooseUnit::StartTargeting(UGameplayAbility* Ability)
{
    Super::StartTargeting(Ability);
    
    CastingUnit = Cast<AParentUnit>( Ability->GetOwningActorFromActorInfo() );
}

void ABaseAbilityChooseUnit::ConfirmTargetingAndContinue()
{
    //adds the target actor to the data broadcast

    if( TargetedUnit )
    {
        TArray<TWeakObjectPtr<AActor>> TargetActorHelperArray; 
        TargetActorHelperArray.Add(TargetedUnit);
        FGameplayAbilityTargetDataHandle TargetData = StartLocation.MakeTargetDataHandleFromActors(TargetActorHelperArray);
        TargetDataReadyDelegate.Broadcast(TargetData);
    }
    else
    {
        TargetDataReadyDelegate.Broadcast( FGameplayAbilityTargetDataHandle() );
    }
}

