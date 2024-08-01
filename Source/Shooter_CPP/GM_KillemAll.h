// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shooter_CPPGameMode.h"
#include "GM_KillemAll.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_CPP_API AGM_KillemAll : public AShooter_CPPGameMode
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled);

private:
	void EndGame(bool IsPlayerWinner);
};
