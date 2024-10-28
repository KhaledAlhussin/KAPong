#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TriggerBox.h"
#include "Ball.generated.h"

UCLASS()
class PONG_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	ABall();

	virtual void Tick(float DeltaTime) override;

	bool IsActorDestroyed() const;

protected:
	virtual void BeginPlay() override;

private:	
	UPROPERTY(EditAnywhere)
	float Speed = 10;

	UPROPERTY(EditAnywhere)
	ATriggerBox* PlayerGoal = nullptr;

	UPROPERTY(EditAnywhere)
	ATriggerBox* EnemyGoal = nullptr;

	bool bIsActorDestroyed = false;
	
};
