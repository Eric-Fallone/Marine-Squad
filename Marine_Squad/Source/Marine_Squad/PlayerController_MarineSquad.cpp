// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController_MarineSquad.h"
#include "NavigationSystem.h"
#include "Engine/World.h"
#include "AIController.h"

#define out


APlayerController_MarineSquad::APlayerController_MarineSquad()
{
    bShowMouseCursor = true;
    DefaultMouseCursor = EMouseCursor::Hand;
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
    //spawn in the party units and add them to the 
    if(UnitOneType)
    {
        FVector loc = FVector(-950.0,-1000,-112);
        FRotator rot = FRotator(0);
        AllUnits.Add((AParentUnit*) GetWorld()->SpawnActor(UnitOneType,&loc, &rot));
    }
    if(UnitTwoType)
    {
        FVector loc = FVector(-950.0,-750,-112);
        FRotator rot = FRotator(0);
        AllUnits.Add((AParentUnit*) GetWorld()->SpawnActor(UnitTwoType,&loc, &rot));
    }
    if(UnitThreeType)
    {
        FVector loc = FVector(-950.0,-500,-112);
        FRotator rot = FRotator(0);
        AllUnits.Add((AParentUnit*) GetWorld()->SpawnActor(UnitThreeType,&loc, &rot));
    }
    if(UnitFourType)
    {
        FVector loc = FVector(-950.0,-250,-112);
        FRotator rot = FRotator(0);
        AllUnits.Add((AParentUnit*) GetWorld()->SpawnActor(UnitFourType,&loc, &rot));
    }
    if(UnitFiveType)
    {
        FVector loc = FVector(-950.0,0,-112);
        FRotator rot = FRotator(0);
        AllUnits.Add((AParentUnit*) GetWorld()->SpawnActor(UnitFiveType,&loc, &rot));
    }
    
}


void APlayerController_MarineSquad::Tick(float DeltaTime)
{
    MoveCamera();  
    float TimeDownLeftClickHelper = GetInputKeyTimeDown(SelectionKeyTimeDown);
    if (TimeDownLeftClickHelper != 0)
    {
        TimeDownLeftClick = TimeDownLeftClickHelper;
    }
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

        InputComponent->BindAction("Change_Focused_Unit", IE_Pressed, this, &APlayerController_MarineSquad::ChangeFocusedUnit);

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
    FocusedUnit = -1;
}

// Selects units based on how far apart the mouse was at the start or the end
// short click clost unit within range
// long click select all in range 
void APlayerController_MarineSquad::SelectionEnded()
{   
    UE_LOG(LogTemp, Warning, TEXT("Left Mouse Button pressed for : %f"),TimeDownLeftClick) 
    
    float DistanceBetwenMouse = FVector2D::Distance(HUDPtr->InitialPoint , HUDPtr->CurrentPoint);
    //by setting this false it gets all the units in the selection area
    HUDPtr->bStartSelecting = false;

    // checks to see how far away after the mouse was moved
    // if greater then this number then it assumed tried to drag select
    if(DistanceBetwenMouse < 15)
    {
        //selects hovered unit
    }
    else
    {
        //selects all in the range
        SelectedUnits = HUDPtr->FoundUnits;
        if( SelectedUnits.Num() > 0 ) 
        {
            // Focuses the first unit from the selected groups. 
            SelectedUnits[0]->FocusUnit( true ); 
            FocusedUnit = AllUnits.Find( SelectedUnits[0] );
        }
        for(int32 i = 0 ; i < SelectedUnits.Num() ; i++ )
        {
            SelectedUnits[i]->StartSelect();
        }
    }
    
}

//-1 to select all else select from all units array by input
void APlayerController_MarineSquad::SelectUnit(int UnitNum)
{
    //stop selecting units 
    for(int32 i= 0 ; i < SelectedUnits.Num() ; i++)
    {
        SelectedUnits[i]->StopSelect();
    }
 
    //focuses the unit if all are selected, selects 0
    if(UnitNum == -1){
        FocusedUnit = 0;
    }
    else
    {
        FocusedUnit = UnitNum;
    }
    //empties the unit array
    SelectedUnits.Empty();

    //adds units to selection dependent on keypress
    if( AllUnits.IsValidIndex(0) && ( UnitNum == 0  || UnitNum == -1 ))
    {
        AllUnits[0]->StartSelect();
        SelectedUnits.Add(AllUnits[0]);
    }
    if( AllUnits.IsValidIndex(1) && ( UnitNum == 1  || UnitNum == -1 ))
    {
        AllUnits[1]->StartSelect();
        SelectedUnits.Add(AllUnits[1]);
    }
    if( AllUnits.IsValidIndex(2) && ( UnitNum == 2  || UnitNum == -1 ))
    {
        AllUnits[2]->StartSelect();
        SelectedUnits.Add(AllUnits[2]);
    }
    if( AllUnits.IsValidIndex(3) && ( UnitNum == 3  || UnitNum == -1 ))
    {
        AllUnits[3]->StartSelect();
        SelectedUnits.Add(AllUnits[3]);
    }
    if( AllUnits.IsValidIndex(4) && ( UnitNum == 4  || UnitNum == -1 ))
    {
        AllUnits[4]->StartSelect();
        SelectedUnits.Add(AllUnits[4]);
    }
}


void APlayerController_MarineSquad::SelectAllUnitsCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectAllUnits Pressed"))
    SelectUnit(-1);
}


void APlayerController_MarineSquad::SelectUnitOneCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitOne Pressed"))
    SelectUnit(0);
}


void APlayerController_MarineSquad::SelectUnitTwoCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitTwo Pressed"))
    SelectUnit(1);
}


void APlayerController_MarineSquad::SelectUnitThreeCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitThree Pressed"))
    SelectUnit(2);
}


void APlayerController_MarineSquad::SelectUnitFourCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitFour Pressed"))
    SelectUnit(3);
}


void APlayerController_MarineSquad::SelectUnitFiveCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("SelectUnitFive Pressed"))
    SelectUnit(4);
}


void APlayerController_MarineSquad::AbilityOneCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityOne Pressed"))
    if(FocusedUnit != -1 && AllUnits.IsValidIndex(FocusedUnit))
    {
        AllUnits[FocusedUnit]->CastAbility(0);
    }
}


void APlayerController_MarineSquad::AbilityTwoCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityTwo Pressed"))
    if(FocusedUnit != -1 && AllUnits.IsValidIndex(FocusedUnit))
    {
        AllUnits[FocusedUnit]->CastAbility(1);
    }
}


void APlayerController_MarineSquad::AbilityThreeCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityThree Pressed"))
    if(FocusedUnit != -1 && AllUnits.IsValidIndex(FocusedUnit))
    {
        AllUnits[FocusedUnit]->CastAbility(2);
    }
}


void APlayerController_MarineSquad::AbilityFourCommand()
{
    UE_LOG(LogTemp, Warning, TEXT("AbilityFour Pressed"))
    if(FocusedUnit != -1 && AllUnits.IsValidIndex(FocusedUnit))
    {
        AllUnits[FocusedUnit]->CastAbility(3);
    }
}

//changed focused unit to the next 
void APlayerController_MarineSquad::ChangeFocusedUnit(){
    //exits if none or 1 unit are selected
    if(FocusedUnit == -1 || SelectedUnits.Num() == 1 || SelectedUnits.Num() ==0 )
    {
        return;
    }

    //FocusedUnit = AllUnits.Find( SelectedUnits[0] );

    int32 helper = ( SelectedUnits.Find( AllUnits[FocusedUnit] ) ) + 1;
    
    if(SelectedUnits.Num() - 1 < helper )
    {
        helper = 0;
    }
    
    FocusedUnit = AllUnits.Find( SelectedUnits[helper] );

    UE_LOG(LogTemp, Warning, TEXT(" Focusing unit: %i"), FocusedUnit )
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