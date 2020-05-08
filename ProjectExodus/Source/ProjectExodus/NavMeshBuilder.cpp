// Fill out your copyright notice in the Description page of Project Settings.


#include "NavMeshBuilder.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "FlockManager.h"

ANavMeshBuilder::ANavMeshBuilder()
{
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	NavBox = CreateDefaultSubobject<UBoxComponent>(TEXT("NavBox"));
	NavBox->SetupAttachment(RootComponent);
	NavBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	NavBox->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Block);
	NavBox->SetBoxExtent(FVector(1000.0f, 1000.0f, 1000.0f));
}

void ANavMeshBuilder::BeginPlay()
{
	Super::BeginPlay();

	if (!bDynamicScanning)
	{
		//ScanWorld();
	}

	//Spawn flocks
	for (int i = 0; i < numberOfFlocks; i++)
	{
		FActorSpawnParameters spawnInfo;
		spawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		AFlockManager* flock = GetWorld()->SpawnActor<AFlockManager>(FMath::RandPointInBox(NavBox->CalcBounds(NavBox->GetComponentTransform()).GetBox()), FRotator(0.0f, 0.0f, 0.0f), spawnInfo);
	}
}

void ANavMeshBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	deltaTime = DeltaTime;

	// Handle dynamic scanning
	if (bDynamicScanning && bAllowScanning)
	{
		if (secondsBetweenScans != 0.0f)
		{
			bAllowScanning = false;
		}

		GetWorld()->GetTimerManager().SetTimer(scanTimer, this, &ANavMeshBuilder::AllowScanning, secondsBetweenScans, false);
		//ScanWorld();
	}
}

void ANavMeshBuilder::ScanWorld()
{
	//Set trace 
	TArray<FHitResult> HitResults;
	FHitResult HitData(ForceInit);
	FQuat Rot = GetActorQuat();
	FCollisionQueryParams TraceParams = FCollisionQueryParams(FName(TEXT("TraceParams")), false, this);

	//Set start and end points
	FVector Start = GetActorLocation();
	FVector End = FVector(0.0f, 0.0f, 0.0f);

	//Do trace
	if (GetWorld()->SweepMultiByChannel(HitResults, Start, End, Rot, ECollisionChannel::ECC_Visibility, FCollisionShape::MakeBox(NavBox->GetScaledBoxExtent()), TraceParams))
	{
		for (int i = 0; i < HitResults.Num(); i++)
		{
			//Fhitresults from each hit actor in the array
			HitData = HitResults[i];

			if (HitData.GetComponent()->IsA(UStaticMeshComponent::StaticClass()))
			{
				UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(HitData.GetComponent());
				FBoxSphereBounds boxSize = mesh->CalcBounds(HitData.GetComponent()->GetComponentTransform());

				FActorSpawnParameters spawnInfo;
				spawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				FVector location = boxSize.Origin;
				FRotator rotation = mesh->GetComponentRotation();

				bool persistentLines = true;
				float lineRenderTime = 10.0f;

				if (bDynamicScanning)
				{
					persistentLines = false;

					if (secondsBetweenScans == 0.0f)
					{
						lineRenderTime = 0.01f;
					}
					else
					{
						lineRenderTime = secondsBetweenScans;
					}

				}

				//DrawDebugBox(GetWorld(), boxSize.Origin, boxSize.BoxExtent, FColor::Blue, persistentLines, lineRenderTime, ECC_WorldStatic, 20.f);
			}
		}
	}
}

void ANavMeshBuilder::AllowScanning()
{
	bAllowScanning = true;
}