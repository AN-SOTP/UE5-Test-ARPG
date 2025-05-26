// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TestPlayerState.h"
#include "MyTestGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UMyTestGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Character")
	void SetSelectedClass(ECharacterClass NewClass) { SelectedClass = NewClass; }

	UFUNCTION(BlueprintPure, Category = "Character")
	ECharacterClass GetSelectedClass() const { return SelectedClass; }

private:
	UPROPERTY()
	ECharacterClass SelectedClass = ECharacterClass::None;
};
