#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPaddle.generated.h"

UCLASS()
class PONG_API APlayerPaddle : public APawn
{
	GENERATED_BODY()

public:
	APlayerPaddle();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	float Speed = 20;

	void Move(float);
	
};
