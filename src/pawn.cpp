#include "pawn.h"
#include "player.cpp"
#include <iostream>
#include <string>

using namespace std;

Pawn::Pawn(string symbol)
{
	this->symbol = symbol;
	this->hasBeenPlayed = false;
}

void Pawn::setHasBeenPlayed(bool hasBeenPlayed)
{
	this->hasBeenPlayed = hasBeenPlayed;
}

bool Pawn::getHasBeenPlayed()
{
	return this->hasBeenPlayed;
}

string Pawn::getSymbol(){
	return this->symbol;
}