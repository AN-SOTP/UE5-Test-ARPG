// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectGameMode.h"
#include "TestProjectPlayerController.h"
#include "TestProjectCharacter.h"
#include "TestPlayerState.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectGameMode::ATestProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}

	PlayerStateClass = ATestPlayerState::StaticClass();
}

void ATestProjectGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}