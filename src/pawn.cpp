#include "pawn.h"
#include "player.cpp"
#include <iostream>
#include <string>

using namespace std;

Pawn::Pawn(int posX, int posY)
{
	this->posX = posX;
	this->posY = posY;
	this->hasBeenPlayed = false
}

void Pawn::setPosX(int posX)
{
	this->posX = posX;
}

void Pawn::setPosY(int posY)
{
	this->posY = posY;
}

void Pawn::setHasBeenPlayed(bool hasBeenPlayed)
{
	this->hasBeenPlayed = hasBeenPlayed;
}

int Pawn::getPosX()
{
	return this->posX;
}

int Pawn::getPosY()
{
	return this->posY;
}

bool Pawn::getHasBeenPlayed()
{
	return this->hasBeenPlayed;
}