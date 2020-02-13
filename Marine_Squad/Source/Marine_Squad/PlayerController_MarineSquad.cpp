// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController_MarineSquad.h"
#include "NavigationSystem.h"
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
}


void APlayerController_MarineSquad::Tick(float DeltaTime)
{
    //MoveCommand();
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
    }
    else{
        UE_LOG(LogTemp, Warning, TEXT("ErrorSetting Up inputs"))
    }
}


void APlayerController_MarineSquad::SelectionStarted()
{   
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
        FVector MoveLocation = Hit.Location + FVector(i / 2 * 300 - 150 , i % 2 *200 -100 , 0);

        //set move action
        SelectedUnits[i]->Move(MoveLocation);
        
        DrawDebugSphere(GetWorld(), MoveLocation, 25,10, FColor::Red,false, 1.f);
        }
    }
}
void APlayerController_MarineSquad::QueCommandStarted()
{
    UE_LOG(LogTemp, Warning, TEXT("QUE Right Mouse Button Pressed"))
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