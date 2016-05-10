// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "ReboundCharacterPawn.generated.h"

UCLASS()
class REBOUND_UE4_API AReboundCharacterPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AReboundCharacterPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere)
		UShapeComponent* Root;

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* characterMesh;

	UPROPERTY(EditAnywhere)
		float baseMovementSpeed;

	UPROPERTY(EditAnywhere)
		float baseThrowStrength;

	UPROPERTY(EditAnywhere)
		float MaxThrowStrength;

	UFUNCTION(BlueprintCallable, Category = "ReboundCharacterPawn")
		void Move(FVector MovementDir);

};
