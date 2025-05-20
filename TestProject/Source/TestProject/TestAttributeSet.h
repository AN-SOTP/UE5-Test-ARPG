// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemTestAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TestAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, meta=(HideInDetailsView))
class TESTPROJECT_API UTestAttributeSet : public UAttributeSet
{
	GENERATED_UCLASS_BODY()

	/**
	 *	NOTE ON MUTABLE:
	 *	This is only done so that UAbilitySystemTestAttributeSet can be initialized directly in GameplayEffectsTest.cpp without doing a const_cast in 100+ places.
	 *	Mutable is not required and should never be used on normal attribute sets.
	 */

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, MaxHealth);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, Health);
	
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	float	MaxMana;*/

	/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")		// You can't make a GameplayEffect 'powered' by Damage (Its transient)
	FGameplayAttributeData	Damage;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, Damage);
	
	/** This Attribute is the actual spell damage for this actor. It will power spell based GameplayEffects */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	SpellDamage;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, SpellDamage);
	
	/** This Attribute is the actual physical damage for this actor. It will power physical based GameplayEffects */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	PhysicalDamage;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, PhysicalDamage);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	CritChance;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, CritChance);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	CritMultiplier;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, CritMultiplier);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	ArmorDamageReduction;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, ArmorDamageReduction);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	LifeSteal;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, LifeSteal);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	Vitality;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, Vitality);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	Strength;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, Strength);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	Intellect;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, Intellect);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	StackingAttribute1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	StackingAttribute2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Base Attributes")
	FGameplayAttributeData	NoStackAttribute;

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual bool PreGameplayEffectExecute(struct FGameplayEffectModCallbackData &Data) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data) override;
	
};
