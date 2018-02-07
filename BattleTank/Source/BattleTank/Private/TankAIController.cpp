// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "Engine/World.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledAITank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		// TODO Move towards the player
		// Aim towards the player
		ControlledAITank->AimAt(PlayerTank->GetActorLocation());
		ControlledAITank->Fire(); // TODO don't fire every frame
	}
}


