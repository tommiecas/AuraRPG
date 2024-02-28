// Copyright Crapiello Entertainment

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AuraPlayerController.generated.h"


class UInputMappingContext;

/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	//constructor
	AAuraPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	//field to enter the Mapping Context for Enhanced Input
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext;
	
};
