// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ATestMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestMenuGameMode();

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	class ACameraActor* MenuCamera;
};
