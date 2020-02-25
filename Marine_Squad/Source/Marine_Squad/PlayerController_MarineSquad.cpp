// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController_MarineSquad.h"
#include "NavigationSystem.h"
#include "Engine/World.h"
#include "AIController.h"

#define out


APlayerController_MarineSquad::APlayerController_MarineSquad()
{
    bShowMouseCursor = true;
    DefaultMouseCursor = EMouseCursor::Crosshairs;
    Moving = false;
}


void APlayerController_MarineSquad::BeginPlay()
{
    HUDPtr = Cast<AHUD_MarineSquad>(GetHUD());
    CAMPtr = Cast<APlayerCamera_MarineSquad>(GetPawn());

	GetViewportSize(OUT ScreenSizeX, OUT ScreenSizeY);

    //spawns in a move indicator 
    if(IndicatorToSpawn)
    {
        FVector loc = FVector(0,0,0);
        FRotator rot = FRotator(0);
        MoveIndicator = (AMoveIndicator*) GetWorld()->SpawnActor(IndicatorToSpawn,&loc, &rot);
    }
    
}


void APlayerController_MarineSquad::Tick(float DeltaTime)
{
    MoveCamera();    
}


void APlayerController_MarineSquad::SetupInputComponent()
{
    Super::SetupInputComponent();
	if(InputComponent)
    {
        InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &APlayerController_MarineSquad::SelectionStarted);
        InputComponent->BindAction("LeftMouseClick", IE_Released, this, &APlayerController_MarineSquad::SelectionEnded);

        InputComponent->BindAction("RightMouseClick", IE_Pressed, this, &APlayerController_MarineSquad::MoveCommandStarted);
        InputComponent->BindAction("RightMouseClick", IE_Released, this, &APlayerController_MarineSquad::MoveCommandEnded);

        InputComponent->BindAction("Que_Command", IE_Pressed, this, &APlayerController_MarineSquad::QueCommandStarted);
        InputComponent->BindAction("Que_Command", IE_Released, this, &APlayerController_MarineSquad::QueCommandStopped);
        
        InputComponent->BindAction("Stop_Command", IE_Pressed, this, &APlayerController_MarineSquad::StopCommand);
        
        InputComponent->BindAction("Attack_Command", IE_Pressed, this, &APlayerController_MarineSquad::AttackMoveCommand);

        InputComponent->BindAction("Select_All_Units_Command", IE_Pressed, this, &APlayerController_MarineSquad::SelectAllUnitsCommand);
        InputComponent->BindAction("Select_Unit_One_Command", IE_Pressed, this, &APlayerController_MarineSquad::SelectUnitOneCommand);
        InputComponent->BindAction("Select_Unit_Two_Command", IE_Pressed, this, &APlayerController_MarineSquad::SelectUnitTwoCommand);
        InputComponent->BindAction("Select_Unit_Three_Command", IE_Pressed, this, &APlayerController_MarineSquad::SelectUnitThreeCommand);
        InputComponent->BindAction("Select_Unit_Four_Command", IE_Pressed, this, &APlayerController_MarineSquad::SelectUnitFourCommand);
        InputComponent->BindAction("Select_Unit_Five_Command", IE_Pressed, this, &APlayerController_MarineSquad::SelectUnitFiveCommand);


        InputComponent->BindAction("Ability_One_Command", IE_Pressed, this, &APlayerController_MarineSquad::AbilityOneCommand);
        InputComponent->BindAction("Ability_Two_Command", IE_Pressed, this, &APlayerController_MarineSquad::AbilityTwoCommand);
        InputComponent->BindAction("Ability_Three_Command", IE_Pressed, this, &APlayerController_MarineSquad::AbilityThreeCommand);
        InputComponent->BindAction("Ability_Four_Command", IE_Pressed, this, &APlayerController_MarineSquad::AbilityFourCommand);

    }
    else{
        UE_LOG(LogTemp, Warning, TEXT("ErrorSetting Up inputs"))
    }
}


/*          Move Commands          */


void APlayerController_MarineSquad::MoveCommandStarted()
{
    UE_LOG(LogTemp, Warning, TEXT("Right Mouse Button Pressed"))
    //todo - clear command que from unit
    MoveCommand();
}


void APlayerController_MarineSquad::MoveCommandEnded()
{
    UE_LOG(LogTemp, Warning, TEXT("Right Mouse Button Released"))
}


void APlayerController_MarineSquad::MoveCommand()
{
    if(SelectedUnits.Num() > 0)
    {
    for(int32 i= 0 ; i < SelectedUnits.Num() ; i++)
        {
        FHitResult Hit;
        GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, OUT Hit);
        FVector MoveLocation = Hit.Location + FVector(0,0,0);//old formation //i / 2 * 300 - 150 , i % 2 *200 -100 , 0);

        //set move action
        SelectedUnits[i]->Move(MoveLocation);
        if(MoveIndicator)
        {
            MoveIndicator->ShowIndicatorAt(MoveLocation);
        }
        //debug sphere for mouse cursor
        //DrawDebugSphere(GetWorld(), MoveLocation, 25,10, FColor::Red,false, 1.f);
        }
    }
}


void APlayerController_MarineSquad::QueCommandStarted()
{
    UE_LOG(LogTemp, Warning, TEXT("Queing started"))
}


void APlayerController_MarineSquad::QueCommandStopped()
{
    UE_LOG(LogTemp, Warning, TEXT("Queing ended"))
}


void APlayerController_MarineSquad::StopCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("StopCommand Pressed"))
    if(SelectedUnits.Num() > 0)
    {
    for(int32 i= 0 ; i < SelectedUnits.Num() ; i++)
        {
        SelectedUnits[i]->StopMoving();
        }
    }
}


void APlayerController_MarineSquad::AttackMoveCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AttackMoveCommand Pressed"))
}


void APlayerController_MarineSquad::SelectionStarted()
{   
    for(int32 i= 0 ; i < SelectedUnits.Num() ; i++)
    {
        SelectedUnits[i]->StopSelect();
    }
    UE_LOG(LogTemp, Warning, TEXT("Left Mouse Button Pressed"))
    HUDPtr->InitialPoint = HUDPtr->GetMousePos2D();
    HUDPtr->bStartSelecting = true;
}


void APlayerController_MarineSquad::SelectionEnded()
{    
    UE_LOG(LogTemp, Warning, TEXT("Left Mouse Button Released"))
    
    HUDPtr->bStartSelecting = false;

    //set TArray to be same array from Hud
    SelectedUnits = HUDPtr->FoundUnits;
    for(int32 i= 0 ; i < SelectedUnits.Num() ; i++)
    {
        SelectedUnits[i]->StartSelect();
    }
}


void APlayerController_MarineSquad::SelectAllUnitsCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectAllUnits Pressed"))
}


void APlayerController_MarineSquad::SelectUnitOneCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitOne Pressed"))
}


void APlayerController_MarineSquad::SelectUnitTwoCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitTwo Pressed"))
}


void APlayerController_MarineSquad::SelectUnitThreeCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitThree Pressed"))
}


void APlayerController_MarineSquad::SelectUnitFourCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitFour Pressed"))
}


void APlayerController_MarineSquad::SelectUnitFiveCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitFive Pressed"))
}


void APlayerController_MarineSquad::AbilityOneCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityOne Pressed"))
}


void APlayerController_MarineSquad::AbilityTwoCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityTwo Pressed"))
}


void APlayerController_MarineSquad::AbilityThreeCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityThree Pressed"))
}


void APlayerController_MarineSquad::AbilityFourCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityFour Pressed"))
}


/*          CAMERA METHODS          */


void APlayerController_MarineSquad::MoveCamera()
{
    if(CAMPtr){
        float MousePosX;
        float MousePosY;
        float CamDirX = 0.0f;
        float CamDirY = 0.0f;

        GetMousePosition(OUT MousePosX, OUT MousePosY);

		//if mouse is touching an edge of the screen

        //Left and Right
		if(MousePosX <= Margin)
        {
			CamDirY = -1.0f;
        }else if (MousePosX >= ScreenSizeX - Margin)
		{
			CamDirY = 1.0f;
		}
		//UP and Down
		if(MousePosY <= 0)
        {
			CamDirX = 1.0f;
        }else if (MousePosY >= ScreenSizeY - Margin)
		{
			CamDirX = -1.0f;
		}

		//Ruturns of no screen movement is wanted
		if(CamDirX == 0.0f && CamDirY == 0.0f){
			return; 
		}
        CAMPtr->MoveCamera(FVector(CamDirX, CamDirY, 0.0f));
    }
}