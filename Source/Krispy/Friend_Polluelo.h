// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "KrispyLevelActor.h"
#include "Friend_Polluelo.generated.h"

UCLASS()
class KRISPY_API AFriend_Polluelo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFriend_Polluelo();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	bool pickedUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	bool eating;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void moveForward(float delta);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	float health;

	int heading;

	
	
};
