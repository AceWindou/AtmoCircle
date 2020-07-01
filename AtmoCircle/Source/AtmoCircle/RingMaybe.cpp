// Fill out your copyright notice in the Description page of Project Settings.


#include "RingMaybe.h"
#include <iostream>

// Sets default values for this component's properties
URingMaybe::URingMaybe()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URingMaybe::BeginPlay()
{
	Super::BeginPlay();
	std::cout << "hallo welt";
	// ...
	
}


// Called every frame
void URingMaybe::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	std::cout << "hallo welt";
	// ...
}

