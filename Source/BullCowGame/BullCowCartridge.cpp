// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

	PrintLine("Welcome to Bull Cows!");
	PrintLine("Guess the 4 letter world!"); // Magic Number Remove!
	PrintLine("Press enter to continue...");

	HiddenWord = TEXT("cake");
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
	ClearScreen();

	PrintLine(Input);

	if (Input == HiddenWord)
	{
		PrintLine("You have Won!");
	}
	else
	{
		PrintLine("You have Lost!");
	}
}