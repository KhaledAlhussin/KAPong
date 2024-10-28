#include "Ball.h"


ABall::ABall()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABall::BeginPlay()
{
	Super::BeginPlay();
	
	if(!PlayerGoal) {
		UE_LOG(LogTemp, Error, TEXT("Ball is missing reference to PlayerGoalTrigger"));
	}

	if(!EnemyGoal) {
		UE_LOG(LogTemp, Error, TEXT("Ball is missing reference to EnemyGoalTrigger"));
	}
}

void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsOverlappingActor(PlayerGoal) || IsOverlappingActor(EnemyGoal)) {
		Destroy();
		bIsActorDestroyed = true;
		UE_LOG(LogTemp, Warning, TEXT("Game is finished!"));
	}
}

bool ABall::IsActorDestroyed() const {
	return bIsActorDestroyed;
}

