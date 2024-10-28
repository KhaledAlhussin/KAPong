#include "EnemyPaddle.h"


AEnemyPaddle::AEnemyPaddle()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyPaddle::BeginPlay()
{
	Super::BeginPlay();
	if(!Ball) {
		UE_LOG(LogTemp, Warning, TEXT("EnemyPaddle is missing reference to the ball"));
	}
}

void AEnemyPaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(Ball && !Ball->IsActorDestroyed()) {
		FVector CurrentLocation = GetActorLocation();
		FVector CurrentBallLocation = Ball->GetActorLocation();

		float Intensity;

		if(CurrentBallLocation.Y > CurrentLocation.Y) {
			Intensity = 1;
		} else if(CurrentBallLocation.Y < CurrentLocation.Y) {
			Intensity = -1;
		}

		Move(Intensity);
	}
}

void AEnemyPaddle::Move(float Direction) {
	FVector CurrentLocation = GetActorLocation();

	CurrentLocation.Y += Speed * Direction;

	SetActorLocation(CurrentLocation);
}

