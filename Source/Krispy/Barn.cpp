// Fill out your copyright notice in the Description page of Project Settings.

#include "Barn.h"


// Sets default values
ABarn::ABarn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABarn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

