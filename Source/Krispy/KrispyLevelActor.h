// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "KrispyLevelActor.generated.h"

/**
 * 
 */
UCLASS()
class KRISPY_API AKrispyLevelActor : public ALevelScriptActor
{
	GENERATED_BODY()
public:
	AKrispyLevelActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GamePlay)
	UStaticMeshComponent* barn;
};
