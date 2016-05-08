// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "ReboundCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class REBOUND_UE4_API AReboundCharacterController : public APlayerController
{
	GENERATED_BODY()

public:
	AReboundCharacterController();

	static const FName VerticalBinding;
	static const FName HorizontalBinding;

protected:

	APawn* Pawn;

	//begin player controller interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	//end player controller interface

	bool bIsCharging = false;

	void ChargeBall();
	void ThrowBall();
	void SetMovement();
	void Charge();
};
