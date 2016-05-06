// Fill out your copyright notice in the Description page of Project Settings.

#include "Rebound_UE4.h"
#include "ReboundCharacterPawn.h"


// Sets default values
AReboundCharacterPawn::AReboundCharacterPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root"));

	RootComponent = Root;

	characterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	characterMesh->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void AReboundCharacterPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReboundCharacterPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AReboundCharacterPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

