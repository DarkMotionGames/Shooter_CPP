// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PlayerBase.h"

void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (BehaviorTree != nullptr)
	{

		RunBehaviorTree(BehaviorTree);

		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());

	}

}

void ABaseAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ABaseAIController::IsDead() const
{
	APlayerBase* ControlledCharacter = Cast<APlayerBase>(GetPawn());
	if (ControlledCharacter != nullptr)
	{
		return ControlledCharacter->IsDead();
	}
	return true; 
}
