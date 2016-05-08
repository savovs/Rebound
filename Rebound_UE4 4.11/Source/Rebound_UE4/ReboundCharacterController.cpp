// Fill out your copyright notice in the Description page of Project Settings.

#include "Rebound_UE4.h"
#include "ReboundCharacterController.h"
#include "ReboundCharacterPawn.h"

const FName AReboundCharacterController::VerticalBinding("Vertical");
const FName AReboundCharacterController::HorizontalBinding("Horizontal");

void AReboundCharacterController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	const float VerValue = GetInputAxisValue(VerticalBinding);
	const float HorValue = GetInputAxisValue(HorizontalBinding);

	const FVector MoveDirection = FVector(VerValue, HorValue, 0.0f).GetClampedToMaxSize(1.0f);
	Pawn = GetPawn();

	if (Pawn)
	{
		Cast<AReboundCharacterPawn>(Pawn)->Move(MoveDirection);
	}

	if (bIsCharging) {

	}
}

void AReboundCharacterController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAxis(VerticalBinding);
	InputComponent->BindAxis(HorizontalBinding);
}

void AReboundCharacterController::ChargeBall()
{
	bIsCharging = true;
}

void AReboundCharacterController::ThrowBall()
{
	bIsCharging = false;
}

void AReboundCharacterController::SetMovement()
{

}
