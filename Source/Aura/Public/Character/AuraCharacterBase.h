// Copyright Crapiello Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

//add a skeletal mesh component attached to a socket on the skeleton to make a weapon for all characters
//UPROPERTY makes it a variable in Unreal. Weapon here is the name of the object.
	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	
};
