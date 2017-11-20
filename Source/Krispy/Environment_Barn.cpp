// Fill out your copyright notice in the Description page of Project Settings.

#include "Environment_Barn.h"


// Sets default values
AEnvironment_Barn::AEnvironment_Barn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnvironment_Barn::BeginPlay()
{
	Super::BeginPlay();
	AKrispyLevelActor* level = Cast<AKrispyLevelActor>(GetWorld()->GetLevelScriptActor());
	level->barn = this;
}

// Called every frame
void AEnvironment_Barn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

