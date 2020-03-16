// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAbilityChooseLocation.h"
//#include "ParentUnit.h"
#include "DrawDebugHelpers.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

ABaseAbilityChooseLocation::ABaseAbilityChooseLocation()
{
    PrimaryActorTick.bCanEverTick = true;   
    Decal = CreateDefaultSubobject<UDecalComponent>("Decal"); 
    RootComp = CreateDefaultSubobject<USceneComponent>("RootComp");
    SetRootComponent(RootComp);
    Decal->SetupAttachment(RootComp);
    Decal->DecalSize = FVector(Radius);
}


void ABaseAbilityChooseLocation::StartTargeting(UGameplayAbility* Ability)
{
    Super::StartTargeting(Ability);
    //will always give null because there is no player controller on basic units
    MasterPC = Cast<APlayerController>( Ability->GetOwningActorFromActorInfo()->GetInstigatorController() ); 
    CastingUnit = Cast<AParentUnit>( Ability->GetOwningActorFromActorInfo() );
}

void ABaseAbilityChooseLocation::ConfirmTargetingAndContinue()
{
    TArray<FOverlapResult> Overlaps;
    TArray<TWeakObjectPtr<AActor>> OverlappedActors; 
    bool TraceComplex = false; 

    FCollisionQueryParams CollisionQueryParams; 
    CollisionQueryParams.bTraceComplex = TraceComplex;
    CollisionQueryParams.bReturnPhysicalMaterial = false;
    CollisionQueryParams.AddIgnoredActor( CastingUnit->GetUniqueID() );

    bool TryOverlap = GetWorld()->OverlapMultiByObjectType(
        Overlaps, 
        TargetLocation, 
        FQuat::Identity, 
        FCollisionObjectQueryParams(ECC_Pawn),
        FCollisionShape::MakeSphere(Radius),
        CollisionQueryParams );

    if(TryOverlap)
    {
        for(int32 i=0; i < Overlaps.Num() ; i++)
        {
            APawn* PawnOverlaped = Cast<APawn>( Overlaps[i].GetActor() );
            if(PawnOverlaped && !OverlappedActors.Contains( PawnOverlaped ) )
            {
                OverlappedActors.Add(PawnOverlaped);
            }
        }
    }
    //adds the target location to the data broadcast
    FGameplayAbilityTargetData_LocationInfo* CenterLocation = new FGameplayAbilityTargetData_LocationInfo();
    if(Decal)
    {
        CenterLocation->TargetLocation.LiteralTransform = Decal->GetComponentTransform();
        CenterLocation->TargetLocation.LocationType = EGameplayAbilityTargetingLocationType::LiteralTransform;
    }

    if(OverlappedActors.Num() > 0)
    {
        FGameplayAbilityTargetDataHandle TargetData = StartLocation.MakeTargetDataHandleFromActors(OverlappedActors);
        TargetData.Add(CenterLocation);
        TargetDataReadyDelegate.Broadcast(TargetData);
    }
    else
    {
        TargetDataReadyDelegate.Broadcast( FGameplayAbilityTargetDataHandle(CenterLocation) );
    }
}

void ABaseAbilityChooseLocation::Tick(float DeltaSeconds){
    Super::Tick(DeltaSeconds);
    Decal->SetWorldLocation(TargetLocation);
    Decal->DecalSize = FVector(Radius);
    //DrawDebugSphere(GetWorld(), TargetLocation, Radius, 32, FColor::Red, false, -1, 0, 5.0f);
}
