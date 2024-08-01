// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_KillemAll.h"
#include "Engineutils.h"
#include "BaseAIController.h"

void AGM_KillemAll::PawnKilled(APawn* PawnKilled)
{
    Super::PawnKilled(PawnKilled);

    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
    if (PlayerController != nullptr)
    {
        EndGame(false);
    }

    //For Loop for Shooter AI
    for (ABaseAIController* Controller : TActorRange<ABaseAIController>(GetWorld()))
    {
        if (!Controller->IsDead())
        {
            return;
        }
    }

    EndGame(true);

}

void AGM_KillemAll::EndGame(bool IsPlayerWinner)
{

    for (AController* Controller : TActorRange<AController>(GetWorld()))
    {
        bool IsPlayerController = Controller->IsPlayerController();
        if (IsPlayerWinner)
        {
            Controller->GameHasEnded(nullptr, IsPlayerController);
        }
        else
        {
            Controller->GameHasEnded(Controller->GetPawn() ,!IsPlayerController);
        }
    }
}

