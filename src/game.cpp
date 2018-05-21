#include "pawn.cpp"
#include "player.cpp"
#include "plateau.cpp"
#include <iostream>
#include <string>

using namespace std;









Game::~Game()
{
	for(int i(0); i<taille; i++)
	{
		delete [] Dameo[i];
	}

	delete [] Dameo;

	myPlayers.clear();
}


void Game::addPlayer(player)
{
	myPlayers.push_back(player); // Permet d'ajouter dans le vecteur de joueur du plateau. Ceci donne accès à player.cpp
}


bool Game::endOfGame()
{
	int nb1 = Player[0] -> getPawnAmount();
	int nb2 = Player[1] -> getPawnAmount();

	return(nb1 == 1 || nb2 == 1 ? true : false);
}