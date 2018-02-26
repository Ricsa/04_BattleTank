// Copyright of Deme András

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"


/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
protected:

	// How close can be the AI tank get
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float  AcceptanceRadius = 8000;

private:

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;
};
