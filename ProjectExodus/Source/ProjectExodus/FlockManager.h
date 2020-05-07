// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlockManager.generated.h"

UCLASS()
class PROJECTEXODUS_API AFlockManager : public AActor
{
	GENERATED_BODY()
	
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* SpawnBox;

protected:

	virtual void BeginPlay() override;

	// Save a global version of delta time
	float deltaTime;

	// Flock variables
	FVector targetLocation;
	float cohesionRadius;
	float cohesionMultiplier = 3.0f;
	float boidSpeed = 150000.0f;
	int flockSize = 15;
	float interpSpeed = 0.02f;
	float rotationTolerance = 0.02f;

	TArray<AActor*> boidList;
	TArray<FVector> hexagonLocations;
	TArray<FVector> fiveLocations;
	TArray<FVector> diamondLocations;
	TArray<FVector> threeLocations;
	TArray<FVector> twoLocations;

	FBox levelBox;

	// Flock functions
	void ScanBoundary();
	void SpawnBoids();
	void FollowLeader();
	void Flock();
	void MakeShape();
	void DeathCheck();
	void DirectFlock();

public:

	AFlockManager();

	virtual void Tick(float DeltaTime) override;
};
