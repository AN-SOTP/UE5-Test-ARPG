// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffectExtension.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(TestAttributeSet)

UTestAttributeSet::UTestAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Health = MaxHealth = 100.f;
	//Mana = MaxMana = 100.f;
	
	Damage = 0.f;
	CritChance = 0.f;
	SpellDamage = 0.f;
	PhysicalDamage = 0.f;
	Vitality = 0.f;
	Strength = 0.f;
	Intellect = 0.f;
	StackingAttribute1 = 0.f;
	StackingAttribute2 = 0.f;
	NoStackAttribute = 0.f;
}

void UTestAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTestAttributeSet, MaxHealth);
	DOREPLIFETIME(UTestAttributeSet, Health);
	//DOREPLIFETIME(UTestAttributeSet, Mana);
	//DOREPLIFETIME(UTestAttributeSet, MaxMana);
	DOREPLIFETIME(UTestAttributeSet, SpellDamage);
	DOREPLIFETIME(UTestAttributeSet, PhysicalDamage);
	DOREPLIFETIME(UTestAttributeSet, CritChance);
	DOREPLIFETIME(UTestAttributeSet, CritMultiplier);
	DOREPLIFETIME(UTestAttributeSet, LifeSteal);
	DOREPLIFETIME(UTestAttributeSet, Vitality);
	DOREPLIFETIME(UTestAttributeSet, Strength);
	DOREPLIFETIME(UTestAttributeSet, Intellect);
}

void UTestAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}
}

bool UTestAttributeSet::PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data)
{
	return Super::PreGameplayEffectExecute(Data);
}

void UTestAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		const float LocalDamageDone = GetDamage();
		SetDamage(0.f);

		if (LocalDamageDone > 0.f)
		{
			const float NewHealth = GetHealth() - LocalDamageDone;
			SetHealth(FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));
		}
	}
}

