#include "pawn.cpp"
#include "player.cpp"
#include "plateau.cpp"
#include <iostream>
#include <string>

using namespace std;

void Game::addPlayer()





bool Game::endOfGame()
{
	int nb1 = Player[0] -> getNbPawn();
	int nb2 = Player[1] -> getNbPawn();

	return(nb1 == 1 || nb2 == 1 ? true : false);
}