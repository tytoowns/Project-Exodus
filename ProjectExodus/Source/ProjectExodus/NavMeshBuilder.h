// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavMeshBuilder.generated.h"

UCLASS()
class PROJECTEXODUS_API ANavMeshBuilder : public AActor
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* NavBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class USceneComponent* Scene;

protected:

	virtual void BeginPlay() override;

	// Scan variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Scanning)
		bool bDynamicScanning = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Scanning)
		float secondsBetweenScans = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flocks)
		int numberOfFlocks = 1;

	bool bAllowScanning = true;

	FTimerHandle scanTimer;
	float deltaTime;

	// Scan functions
	void ScanWorld();
	void AllowScanning();

public:

	ANavMeshBuilder();

	virtual void Tick(float DeltaTime) override;
};
