#include "PlayerPaddle.h"
#include "Components/InputComponent.h"


APlayerPaddle::APlayerPaddle()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerPaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerPaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerPaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveUp", this, &APlayerPaddle::Move);

}

void APlayerPaddle::Move(float Amount) {

	if(Amount != 0) {
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation.Y += Amount * Speed;

		SetActorLocation(CurrentLocation);
	}

}

