#include "player.h"
#include <iostream>
#include <string>


using namespace std;

Player::Player(string symbol) 
{
	this->symbol = symbol
	this->pawns = new map();
}

// Ajoute un pion à la map
void Player::addPawn(Coord coord, Pawn pawn)
{
	this->pawns[coord] = pawn;
}

// Retire un pion de la map
void Player::removePawn(Coord coord){
	this->pawns.erase(coord);
}

// Retourne le nombre de pions possédé par le joueur
int Player::getPawnAmount(){
	return this->pawns.size();
}
