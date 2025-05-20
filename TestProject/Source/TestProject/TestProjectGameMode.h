// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestProjectGameMode.generated.h"

UCLASS(minimalapi)
class ATestProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestProjectGameMode();
protected:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
};



