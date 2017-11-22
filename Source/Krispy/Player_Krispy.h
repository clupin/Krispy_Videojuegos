// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Player_Krispy.generated.h"
//#include "Kismet/GameplayStatics.h"

UCLASS()
class KRISPY_API APlayer_Krispy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Krispy(const FObjectInitializer& oi);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* cameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	float mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	int cornBag;

	int heading;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void moveForward(float delta);

	int pollueloCorn();
	int hpCorn();
	int slowMotion();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
