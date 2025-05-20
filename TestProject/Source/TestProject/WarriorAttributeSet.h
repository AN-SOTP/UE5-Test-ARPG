// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestAttributeSet.h"
#include "WarriorAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UWarriorAttributeSet : public UTestAttributeSet
{
	GENERATED_BODY()

public:
	UWarriorAttributeSet(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Warrior Attributes")
	FGameplayAttributeData Rage;
	ATTRIBUTE_ACCESSORS(UWarriorAttributeSet, Rage)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Warrior Attributes")
	FGameplayAttributeData MaxRage;
	ATTRIBUTE_ACCESSORS(UWarriorAttributeSet, MaxRage)

	// Override these for rage-specific logic
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

};
