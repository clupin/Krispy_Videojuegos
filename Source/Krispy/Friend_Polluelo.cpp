// Fill out your copyright notice in the Description page of Project Settings.

#include "Friend_Polluelo.h"
#include "Environment_Barn.h"



// Sets default values
AFriend_Polluelo::AFriend_Polluelo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	heading = 1;
	health = 1.0f;
}

// Called when the game starts or when spawned
void AFriend_Polluelo::BeginPlay()
{
	Super::BeginPlay();
//AEnvironment_Barn* eBarn = Cast<AEnvironment_Barn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
//	if (eBarn == NULL)
//		return;
//	FVector barn_location = eBarn->GetActorLocation();
}

// Called every frame
void AFriend_Polluelo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/* codigo profesor para hacer el encotrar enemigo, hay q basarse en esto para hacer el follow hacia la puerta final
	pero se debe hacer cuando se crea (arriba ^) */
	/*
	AReiken* player = Cast<AReiken>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (player == NULL)
		return;
	FVector vplayer = player->GetActorLocation() - GetActorLocation();
	float distancia = vplayer.Size();
	if (distancia <= radio_vision->GetScaledSphereRadius()){
		vplayer.Normalize();
		AddMovementInput(vplayer, 20 * delta);
		FRotator heading = vplayer.Rotation();
		heading.Pitch = 0;
		RootComponent->SetWorldRotation(heading);
	}
	*/
}

// Called to bind functionality to input
void AFriend_Polluelo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFriend_Polluelo::moveForward(float delta)
{

	if (Controller && delta){
		FRotator a = GetActorRotation();
		FRotator r(0, 0, 0);
		/*
		if (sign(delta) != sign(heading)){
			heading = sign(delta);
			if (heading < 0)
				r.Yaw = 180;
			else
				r.Yaw = 0;
			this->SetActorRotation(r);
		}*/
		FVector fwd = GetActorForwardVector();
		AddMovementInput(fwd, fabs(delta));
	}
}
