// Fill out your copyright notice in the Description page of Project Settings.


#include "TestMenuGameMode.h"
#include "TestProjectPlayerController.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"

ATestMenuGameMode::ATestMenuGameMode()
{
	PlayerControllerClass = ATestProjectPlayerController::StaticClass();
	DefaultPawnClass = nullptr;
}

void ATestMenuGameMode::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	MenuCamera = GetWorld()->SpawnActor<ACameraActor>(ACameraActor::StaticClass(), 
		FVector(0.0f, 0.0f, 1000.0f),
		FRotator(-20.0f, 0.0f, 0.0f),  
		SpawnParams);

	if (MenuCamera)
	{
		UCameraComponent* CameraComponent = MenuCamera->GetCameraComponent();
		if (CameraComponent)
		{
			CameraComponent->SetFieldOfView(90.0f);
			CameraComponent->bUsePawnControlRotation = false;
			CameraComponent->bConstrainAspectRatio = false;

		}
	}

	
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;

		if (MenuCamera)
		{
			PC->SetViewTarget(MenuCamera);
		}
	}

}
