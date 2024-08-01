// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Shooter_CPPGameMode.generated.h"

UCLASS(minimalapi)
class AShooter_CPPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AShooter_CPPGameMode();

	virtual void PawnKilled(APawn* PawnKilled);
};



