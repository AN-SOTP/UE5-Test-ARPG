// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayerState.h"
#include "WarriorAttributeSet.h"
#include UE_INLINE_GENERATED_CPP_BY_NAME(TestPlayerState)

ATestPlayerState::ATestPlayerState()
{
	// Create ability system component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	// Create the attribute set
	BaseAttributeSet = CreateDefaultSubobject<UTestAttributeSet>("BaseAttributeSet");

	CharacterClass = ECharacterClass::None;

	// No need for tick
	PrimaryActorTick.bCanEverTick = false;
}

UAbilitySystemComponent* ATestPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* ATestPlayerState::GetBaseAttributeSet() const
{
	return BaseAttributeSet;
}

UAttributeSet* ATestPlayerState::GetClassAttributeSet() const
{
	//return BaseAttributeSet;
	if (ClassAttributeSet)
	{
		return ClassAttributeSet;
	}
	else
	{
		return nullptr;
	}
}

void ATestPlayerState::SetCharacterClass(ECharacterClass NewClass)
{
	if (CharacterClass != NewClass)
	{
		CharacterClass = NewClass;
		InitializeAttributeSets();
		UE_LOG(LogTemp, Log, TEXT("Character Class: %s"), *UEnum::GetDisplayValueAsText(CharacterClass).ToString());
	}
}

void ATestPlayerState::InitializeAttributeSets()
{
	if (AbilitySystemComponent)
	{
		// Initialize the attribute sets based on the character class
		switch (CharacterClass)
		{
			case ECharacterClass::Warrior:
				ClassAttributeSet = NewObject<UWarriorAttributeSet>(this);
				break;
			default:
				ClassAttributeSet = nullptr;
				break;
		}

		if (ClassAttributeSet)
		{
			AbilitySystemComponent->AddAttributeSetSubobject(ClassAttributeSet);
			if (UWarriorAttributeSet* WarriorSet = Cast<UWarriorAttributeSet>(ClassAttributeSet))
			{
				WarriorSet->InitRage(0.0f);
				WarriorSet->InitMaxRage(100.0f);
			}

		}
	}
}

void ATestPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		//Initialize attributes here or when class is chosen (when i actually make class choosing menu)
	}
}
