#include "board.h"
#include "player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Board::Plateau(int nb)
{
	this -> taille = nb;
	vi.resize(taille); 
	this->initVi();
}

void Board::initVi() {
	for (int i=0; i < taille; i++) {
		for (int j=0; j < taille; j++) {
			vi[i][j] = new Case();
		}
	}
}


void Board::initBoard(Player player1, Player player2) 
{
    int player1LineSize; // nombre de pions pour la ligne courante du Joueur 1
    int player2LineSize; // nombre de pions pour la ligne courante du Joueur 2
    int middleSpace;        // nombre de ligne dediées à l'espace du milieu

	int colStart;
	int colEnd;
	int player1Start = 0;
	int player2Start;
    
    // Si la taille du plateau est impaire, l'espace du milieu sera de 3
    espaceMilieu = 2+taille % 2;   

    const int playersLineAmount = (taille - espaceMilieu) / 2; // Nombre de lignes de pions pour chaque joueur
    
    player1LineSize = taille; // Le nombre de pion de la ligne la plus haute du joueur1
                              // correspond à la taille du plateau
    
    for(int i=player1Start; i < playersLineAmount; i++) 
    {
		this->setLine(i, player1LineSize, player1)
    	player1LineSize -= 2;
    }

    player2LineSize = player1LineSize;
    
    player2Start = playersLineAmount + middleSpace;
    
    for(int i=player2Start; i < this->size; i++) 
    {
        player2LineSize += 2;
        this->setLine(i, player2LineSize, player2);
    }
}

void Board::setLine(int i, int playerLineSize, Player player)
{
    int colStart = (this->size - playerLineSize) / 2;
	int colEnd = colStart + playerLineSize
	Pawn currPawn;

	for(int j=colStart, j < colEnd; j++){
		currPawn = new Pawn(player.getSymbol());
		this->vi[i][j].setPawn(currPawn);
		player.addPawn(new Coord(i, j), currPawn);
	}
}

std::vector<std::vector<Case>> Board::getVi(){
	return this->vi;
}

int Board::getSize(){
	return this->size
}

void Board::coordinates(int& x, int& y)
{
	
	cout<< " Entrez les coordonnées x : ";
	cin>>x;
	cout<< " Entrez coordonnées y : ";
	cin>>y;
	cout<< x << " "<< y << endl;
}
void Board::move(int x, int y, int x2, int y2, bool& correct, int player)
{
	vi[x][y] = 0;
	vi[x2][y2] = player;
	correct = true;
}

// Bouger un pion
void Board::movePawn(int x, int y, int x2, int y2, bool& correct)
{
	int sX = x2 - x;
	int sY = y2 - y;
	int tmpx = x;
	int tmpy = y;



	if(vi[x][y] == 1)
	{

		//Diagonale droite
		//if(sX < sY && x > x2 && y < y2)
		//{
			//tmpx = +sX;
			//tmpy = +sY;

			//if(tmpx == sX && tmpy == sY)
			//{
				vi[x2][y2] = vi[x][y];
				vi[x][y] = 0;
			//}
				
		//}

	}
}






bool Board::outLimit(int x, int y)
{
	return(x < 0 || x >= taille || y < 0 || y >= taille);
}