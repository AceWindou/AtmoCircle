// Fill out your copyright notice in the Description page of Project Settings.


#include "RingActor.h"
#include <iostream>
// Sets default values

int main() {
	std::cout << "hallo welt tilde";
	return 0;
}
ARingActor::ARingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARingActor::BeginPlay()
{
	Super::BeginPlay();
	std::cout << "hallo welt tilde";
	
}

// Called every frame
void ARingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	std::cout << "hallo welt tilde frame";
}

