// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "TestAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TestPlayerState.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	None        UMETA(DisplayName = "None"),
	Warrior     UMETA(DisplayName = "Warrior"),
	//...
};


/**
 * 
 */
UCLASS()
class TESTPROJECT_API ATestPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ATestPlayerState();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetBaseAttributeSet() const;
	UAttributeSet* GetClassAttributeSet() const;

	UFUNCTION(BlueprintCallable, Category = "Character Class")
	void SetCharacterClass(ECharacterClass NewClass);
	
	UFUNCTION(BlueprintPure, Category = "Character Class")
	ECharacterClass GetCharacterClass() const { return CharacterClass; }


protected:
	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	UAttributeSet* BaseAttributeSet;
	UPROPERTY()
	UAttributeSet* ClassAttributeSet;
	
	UPROPERTY()
	ECharacterClass CharacterClass;

	void InitializeAttributeSets();

	virtual void BeginPlay() override;
};
