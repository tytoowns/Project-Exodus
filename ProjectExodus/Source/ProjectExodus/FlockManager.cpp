// Fill out your copyright notice in the Description page of Project Settings.


#include "FlockManager.h"
#include "Components/BoxComponent.h"
#include "Boid.h"
#include "NavMeshBuilder.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"


// Sets default values
AFlockManager::AFlockManager()
{
	PrimaryActorTick.bCanEverTick = true;

	SpawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("NavBox"));
	SpawnBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	SpawnBox->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));
}

// Called when the game starts or when spawned
void AFlockManager::BeginPlay()
{
	Super::BeginPlay();

	SpawnBoids();
	ScanBoundary();
}

// Called every frame
void AFlockManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	deltaTime = DeltaTime;

	DirectFlock();
}

void AFlockManager::ScanBoundary()
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
	if (GetWorld()->SweepMultiByChannel(HitResults, Start, End, Rot, ECollisionChannel::ECC_GameTraceChannel1, FCollisionShape::MakeBox(SpawnBox->GetScaledBoxExtent()), TraceParams))
	{
		for (int i = 0; i < HitResults.Num(); i++)
		{
			//Fhitresults from each hit actor in the array
			HitData = HitResults[i];

			if (HitData.GetActor()->IsA(ANavMeshBuilder::StaticClass()))
			{
				levelBox = HitData.GetComponent()->CalcBounds(HitData.GetComponent()->GetComponentTransform()).GetBox();
			}
		}
	}
}

void AFlockManager::SpawnBoids()
{
	// Spawn parameters
	FActorSpawnParameters spawnInfo;
	spawnInfo.Owner = this;
	spawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	targetLocation = FMath::RandPointInBox(levelBox);

	UObject* SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("/Game/Blueprints/BP_Boid2")));

	UBlueprint* GeneratedBP = Cast<UBlueprint>(SpawnActor);

	if (!SpawnActor)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("CANT FIND OBJECT TO SPAWN")));
		return;
	}

	UClass* SpawnClass = SpawnActor->StaticClass();

	if (SpawnClass == NULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("CLASS == NULL")));
		return;
	}

	// Spawn a flock of boids
	for (int i = 0; i < flockSize; i++)
	{
		// Spawn a blueprint boid
		ABoid* boid = GetWorld()->SpawnActor<ABoid>(GeneratedBP->GeneratedClass, FMath::RandPointInBox(SpawnBox->CalcBounds(SpawnBox->GetComponentTransform()).GetBox()), FRotator(0.0f, 0.0f, 0.0f), spawnInfo);

		// Spawn a C++ boid
		//ABoid* boid = GetWorld()->SpawnActor<ABoid>(FMath::RandPointInBox(SpawnBox->CalcBounds(SpawnBox->GetComponentTransform()).GetBox()), FRotator(0.0f, 0.0f, 0.0f), spawnInfo);

		//Add the boid to the array
		boidList.Add(boid);

		// For the first boid, get our cohesion radius for separation
		if (i == 0)
		{
			cohesionRadius = boid->GetSphereRadius() * cohesionMultiplier;
		}
	}

	// pyramid variables
	int row = 0;
	int boidCounter = 0;
	FVector desiredLocation;

	// Arrange boids in a pyramid formation
	for (int i = 0; i < boidList.Num(); i++)
	{
		// Get a reference to each boid
		ABoid* boid = Cast<ABoid>(boidList[i]);

		// If we are the leader boid
		if (i == 0)
		{
			desiredLocation = boid->GetActorLocation();
			row++;
		}
		else
		{
			if (boidCounter == row)
			{
				// Start a new line
				desiredLocation -= boidList[0]->GetActorForwardVector() * cohesionRadius;
				desiredLocation -= boidList[0]->GetActorRightVector() * cohesionRadius * row;
				desiredLocation += boidList[0]->GetActorRightVector() * cohesionRadius / 2;

				// Reset the counter and set to the next row
				boidCounter = 0;
				row++;
			}
			else
			{
				// Keep adding boids to the right
				desiredLocation += boid->GetActorRightVector() * cohesionRadius;
			}
		}

		boid->SetActorRotation(boidList[0]->GetActorRotation());
		boid->SetActorLocation(desiredLocation);
		boidCounter++;
	}
}

void AFlockManager::DirectFlock()
{
	// First, check list isnt being resized
	DeathCheck();

	// If our list is not empty
	if (boidList.Num() != 0)
	{
		// Display behaviours
		FollowLeader();

		if (boidList.Num() < 6)
		{
			boidSpeed = 200000.0f;

			for (int i = 0; i < boidList.Num(); i++)
			{
				// Get a reference to each boid
				ABoid* boid = Cast<ABoid>(boidList[i]);

				boid->SetLightColor(FLinearColor::Red);
			}

		}

		/*
		if (boidList.Num() > 6)
		{
			FollowLeader();
		}
		else if (boidList.Num() == 6)
		{
			Flock();
		}
		//else if (boidList.Num() < 6)
		//{
			//MakeShape();
		//}
		*/
	}
	else
	{
		SpawnBoids();
	}
}

void AFlockManager::FollowLeader()
{
	for (int i = 0; i < boidList.Num(); i++)
	{
		ABoid* boid = Cast<ABoid>(boidList[i]);

		FRotator targetRotation;

		// If we are the lead boid, set our target rotation to point at the target location
		if (i == 0)
		{
			targetRotation = UKismetMathLibrary::FindLookAtRotation(boid->GetActorLocation(), targetLocation);
		}
		// Otherwise point to the location behind the boid in front of it
		else
		{
			FVector desiredLocation = boidList[i - 1]->GetActorLocation();
			desiredLocation -= (boidList[i - 1]->GetActorForwardVector() * cohesionRadius / 3);
			targetRotation = UKismetMathLibrary::FindLookAtRotation(boid->GetActorLocation(), desiredLocation);
		}

		// If we haven't reached our target rotation
		if (!FMath::IsNearlyEqual(boid->GetActorRotation().Pitch, targetRotation.Pitch, rotationTolerance) &&
			!FMath::IsNearlyEqual(boid->GetActorRotation().Yaw, targetRotation.Yaw, rotationTolerance))
		{
			// Lerp rotate towards our target rotation
			boid->SetActorRotation(FMath::Lerp(boid->GetActorRotation(), targetRotation, interpSpeed));
		}
		else
		{
			// If we have nearly reached it, just set the rotation
			boid->SetActorRotation(targetRotation);
		}

		// Finally, move forward
		FVector location = boid->GetActorLocation();
		location += boid->GetActorForwardVector() * boidSpeed * deltaTime;
		boid->SetActorLocation(location);
	}

	// Finally, check if leader has reached destination, if so, pick a new random one
	if (FVector::Dist(boidList[0]->GetActorLocation(), targetLocation) < cohesionRadius)
	{
		targetLocation = FMath::RandPointInBox(levelBox);
	}
	else
	{
		//DrawDebugBox(GetWorld(), targetLocation, FVector(400.0f, 400.0f, 400.0f), FColor::Blue, false, 0.02, ECC_WorldStatic, 50.f);
	}
}

void AFlockManager::Flock()
{
	int row = 0;
	int boidCounter = 0;
	FVector desiredLocation;
	FRotator desiredRotation;

	for (int i = 0; i < boidList.Num(); i++)
	{
		// Get a reference to each boid
		ABoid* boid = Cast<ABoid>(boidList[i]);

		boid->SetLightColor(FLinearColor::Red);

		// If we are the leader boid
		if (i == 0)
		{
			// Set the current location as the leader boid location
			desiredRotation = UKismetMathLibrary::FindLookAtRotation(boid->GetActorLocation(), targetLocation);
			desiredLocation = boid->GetActorLocation();

			// Set target rotation
			if (!FMath::IsNearlyEqual(boid->GetActorRotation().Pitch, desiredRotation.Pitch, rotationTolerance) &&
				!FMath::IsNearlyEqual(boid->GetActorRotation().Yaw, desiredRotation.Yaw, rotationTolerance))
			{
				// Lerp rotate towards our target rotation
				boid->SetActorRotation(FMath::Lerp(boid->GetActorRotation(), desiredRotation, interpSpeed));
			}
			else
			{
				// If we have nearly reached it, just set the rotation
				boid->SetActorRotation(desiredRotation);
			}

			// Increment the row counter to row 2
			row++;
		}
		else
		{
			if (boidCounter == row)
			{
				// Start a new line
				desiredLocation -= boidList[0]->GetActorForwardVector() * cohesionRadius;
				desiredLocation -= boidList[0]->GetActorRightVector() * cohesionRadius * row;
				desiredLocation += boidList[0]->GetActorRightVector() * cohesionRadius / 2;

				// Reset the counter and set to the next row
				boidCounter = 0;
				row++;
			}
			else
			{
				// Keep adding boids to the right
				desiredLocation += boid->GetActorRightVector() * cohesionRadius;
			}
		}

		if (i != 0)
		{
			// Set rotation to match lead boid
			boid->SetActorRotation(FMath::Lerp(boid->GetActorRotation(), boidList[0]->GetActorRotation(), interpSpeed * 2));

			// If each boid other than the leader has not reached the required location
			if (FVector::Dist(boidList[i]->GetActorLocation(), targetLocation) > cohesionRadius / cohesionMultiplier)
			{
				boid->SetActorLocation(FMath::VInterpConstantTo(boid->GetActorLocation(), desiredLocation, deltaTime, boidSpeed / 1.5f)); // /2????
			}
		}

		// Finally, move forward
		FVector location = boid->GetActorLocation();
		location += boid->GetActorForwardVector() * boidSpeed * deltaTime;
		boid->SetActorLocation(location);

		boidCounter++;

		// Finally, check if leader has reached destination, if so, pick a new random one
		if (FVector::Dist(boidList[0]->GetActorLocation(), targetLocation) < cohesionRadius)
		{
			targetLocation = FMath::RandPointInBox(levelBox);
		}
		else
		{
			//DrawDebugBox(GetWorld(), targetLocation, FVector(400.0f, 400.0f, 400.0f), FColor::Blue, false, 0.02, ECC_WorldStatic, 50.f);
		}
	}

	// Finally, check if leader has reached destination, if so, pick a new random one
	if (FVector::Dist(boidList[0]->GetActorLocation(), targetLocation) < cohesionRadius)
	{
		targetLocation = FMath::RandPointInBox(SpawnBox->CalcBounds(SpawnBox->GetComponentTransform()).GetBox());
	}
}

void AFlockManager::MakeShape()
{
	for (int i = 0; i < boidList.Num(); i++)
	{
		// Get a reference to each boid
		ABoid* boid = Cast<ABoid>(boidList[i]);

		boid->SetActorRotation(UKismetMathLibrary::FindLookAtRotation(boid->GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation()));

		switch (boidList.Num())
		{
		case 6:

			// Set hexagon locations

			// Set the 1st boid to stay in it's original location
			hexagonLocations.Add(FVector(boidList[0]->GetActorUpVector() * (cohesionRadius * 0)));
			// Set the 2nd boid 2 units to the right and 2 units up
			hexagonLocations.Add(FVector(boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));
			// Set the 3rd boid 2 units to the right and 4 units up
			hexagonLocations.Add(FVector(boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 4));
			// Set the 4th boid 6 units up
			hexagonLocations.Add(FVector(boidList[0]->GetActorUpVector() + boidList[0]->GetActorUpVector() * (cohesionRadius * 6)));
			// Set the 5th boid 2 units to the left and 4 units up
			hexagonLocations.Add(FVector(-boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 4));
			// Set the 6th boid 2 units to the left and 2 units up
			hexagonLocations.Add(FVector(-boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));

			targetLocation = hexagonLocations[i];
			break;

		case 5:

			// Set five locations

			// Set the 1st boid to stay in it's original location
			fiveLocations.Add(FVector(boidList[0]->GetActorUpVector() * (cohesionRadius * 0)));
			// Set the 2nd boid 2 units to the right and 2 units up
			fiveLocations.Add(FVector(boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));
			// Set the 3rd boid 2 units to the left and 2 units up
			fiveLocations.Add(FVector(-boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));
			// Set the 4th boid 2 units to the right and 2 units down
			fiveLocations.Add(FVector(boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) - boidList[0]->GetActorUpVector() * (cohesionRadius * 2));
			// Set the 5th boid 2 units to the left and 2 units down
			fiveLocations.Add(FVector(-boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) - boidList[0]->GetActorUpVector() * (cohesionRadius * 2));

			targetLocation = fiveLocations[i];
			break;

		case 4:

			// Set diamond locations

			// Set the 1st boid to stay in it's original location
			diamondLocations.Add(FVector(boidList[0]->GetActorUpVector() * (cohesionRadius * 0)));
			// Set the 2nd boid 2 units to the right and 2 units up
			diamondLocations.Add(FVector(boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));
			// Set the 3rd boid 4 units up
			diamondLocations.Add(FVector(boidList[0]->GetActorUpVector() + boidList[0]->GetActorUpVector() * (cohesionRadius * 4)));
			// Set the 4th boid 2 units to the left and 2 units up
			diamondLocations.Add(FVector(-boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));

			targetLocation = diamondLocations[i];
			break;

		case 3:

			// Set three locations

			// Set the 1st boid to stay in it's original location
			threeLocations.Add(FVector(boidList[0]->GetActorUpVector() * (cohesionRadius * 0)));
			// Set the 2nd boid 2 units to the right and 2 units up
			threeLocations.Add(FVector(boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));
			// Set the 3rd boid 2 units to the left and 2 units down
			threeLocations.Add(FVector(-boidList[0]->GetActorRightVector() * (cohesionRadius * 2)) + boidList[0]->GetActorUpVector() * (cohesionRadius * 2));


			targetLocation = threeLocations[i];
			break;

		case 2:

			// Set two locations

			// Set the 1st boid to stay in it's original location
			twoLocations.Add(FVector(boidList[0]->GetActorUpVector() * (cohesionRadius * 0)));
			// Set the 2nd boid 4 units up
			twoLocations.Add(FVector(boidList[0]->GetActorUpVector() + boidList[0]->GetActorUpVector() * (cohesionRadius * 4)));

			targetLocation = twoLocations[i];
			break;

		default:
			targetLocation = boid->GetActorLocation();
			break;
		}

		// If the boid isn't the lead boid
		if (boid != boidList[0])
		{
			// Set it to lerp rotate to look at the player
			FRotator playerRotation = UKismetMathLibrary::FindLookAtRotation(boid->GetActorLocation(), GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation());
			boid->SetActorRotation(FMath::Lerp(boid->GetActorRotation(), playerRotation, interpSpeed));
		}

		// If the boid is not in it's desired position
		if (FVector::Dist(boidList[i]->GetActorLocation(), targetLocation) > 1)
		{
			boid->SetActorLocation(FMath::VInterpConstantTo(boid->GetActorLocation(), targetLocation, deltaTime, boidSpeed * 2));
		}
		else
		{
			// Shoot line to the next boid
			for (int j = 0; j < boidList.Num(); j++)
			{
				FVector start = boidList[j]->GetActorLocation();
				FVector end;

				// If this is the last boid, shoot line to the first boid
				if (j == boidList.Num() - 1)
				{
					end = boidList[0]->GetActorLocation();
				}
				else
				{
					end = boidList[j + 1]->GetActorLocation();
				}

				DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 0.02f, ECC_WorldStatic, 100.f);
			}
		}
	}
}

void AFlockManager::DeathCheck()
{
	for (int i = 0; i < boidList.Num(); i++)
	{
		// Get a reference to each boid
		ABoid* boid = Cast<ABoid>(boidList[i]);

		// If the boid is dead
		if (boid->GetIsDead())
		{
			// Remove it from the list
			boidList.RemoveSingle(boid);
		}
	}
}