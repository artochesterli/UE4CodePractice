// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryMan_GameMode.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "TimerManager.h"

ABatteryMan_GameMode::ABatteryMan_GameMode() {
	PrimaryActorTick.bCanEverTick = true;
}

void ABatteryMan_GameMode::BeginPlay() {
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABatteryMan_GameMode::SpawnPlayerRecharge, FMath::RandRange(2,5), true);
}

void ABatteryMan_GameMode::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);


}

void ABatteryMan_GameMode::SpawnPlayerRecharge() {
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector Pos = FVector(RandX, RandY, Spawn_Z);
	FRotator Rot = FRotator(0, 0, 0);

	GetWorld()->SpawnActor(PlayerRecharge, &Pos, &Rot);


}

