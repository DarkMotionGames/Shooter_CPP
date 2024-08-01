// Copyright Epic Games, Inc. All Rights Reserved.

#include "Shooter_CPPGameMode.h"
#include "Shooter_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooter_CPPGameMode::AShooter_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AShooter_CPPGameMode::PawnKilled(APawn* PawnKilled)
{
	
}

