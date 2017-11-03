// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Krispy.h"


// Sets default values
APlayer_Krispy::APlayer_Krispy(const FObjectInitializer& oi){
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->bAbsoluteRotation = true;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	camera->bUsePawnControlRotation = false;

}

// Called when the game starts or when spawned
void APlayer_Krispy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_Krispy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Krispy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (PlayerInputComponent) {
		PlayerInputComponent->BindAxis("forward", this, &APlayer_Krispy::moveForward);
		PlayerInputComponent->BindAxis("backward", this, &APlayer_Krispy::moveForward);

		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
		PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	}

}

void APlayer_Krispy::moveForward(float delta) {
	if (Controller && delta) {
		FVector fwd = GetActorForwardVector();
		AddMovementInput(fwd, delta);
	}
}

