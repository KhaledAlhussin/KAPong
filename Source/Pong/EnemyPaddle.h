#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.h"
#include "EnemyPaddle.generated.h"

UCLASS()
class PONG_API AEnemyPaddle : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemyPaddle();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:	
	UPROPERTY(EditAnywhere)
	float Speed = 20;

	UPROPERTY(EditAnywhere)
	ABall* Ball = nullptr;

	void Move(float);
};
