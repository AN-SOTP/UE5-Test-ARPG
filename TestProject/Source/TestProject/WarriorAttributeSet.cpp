// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffectExtension.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(WarriorAttributeSet)

UWarriorAttributeSet::UWarriorAttributeSet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Rage = 0.f;
	MaxRage = 100.f;
}

void UWarriorAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWarriorAttributeSet, Rage);
	DOREPLIFETIME(UWarriorAttributeSet, MaxRage);
}

void UWarriorAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	//Clamp rage between 0 and MaxRage
	if (Attribute == GetRageAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxRage());
	}
}

void UWarriorAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}

