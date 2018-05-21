#include "player.h"
#include <iostream>
#include <string>


using namespace std;

Player::Player(string symbol) 
{
	this->symbol = symbol
}

void Player::addPawn(Pawn pawn)
{
	this->pawns.push_back(pawn);
}



// Player::Player(string name, string pa, int nb)
// {
// 	this -> namePlayer = name;
// 	this -> pawn = pa;
// 	this -> numberPawn = nb;
// }

// void Player::affichePlayer()
// {
// 	cout<<" Votre nom :"<<namePlayer<<endl;
// 	cout<<" Vos pions :"<<pawn<<endl;
// 	cout<<"Nombre de pion à votre disposition :"<<numberPawn<<endl;
// }

// string chooseName()
// {
// 	bool yes = false;
// 	string prename ="";
// 	string retour="";

// 	do
// 	{
// 		cout<<"Veuillez choisir votre nom : "; cin >> prename;
// 		cout<<"Vous vous appelez : "<<prename<<endl;
// 		cout<<"Vous voulez vous modifier votre nom ? Y/n ";cin >> retour;
// 		if(retour == "Y")
// 		{
// 			yes = true;
// 		}
// 	}while(!yes);

// 	return prename;
// }

// string choosePawn(ListePawn& Pa)
// {
// 	string r = Pa.takePawn();

// 	return r;
// }

// //int chooseNbPawn(int )

// Player JoueurOne(ListePawn& Pa, int n)
// {
// 	string namePlayer = chooseName();
// 	string p = choosePawn(Pa);
// 	int nb = chooseNbPawn(n);
// 	Player g(namePlayer, p, nb);
// 	return g;
// }

// Player JoueurTwo(ListePawn& Pa, int n)
// {
// 	string namePlayer = chooseName();
// 	string x;
// 	string y = t.getPawn();
// 	bool same = true;

// 	while(same)
// 	{
// 		x = choosePawn(P);
// 		if(x != y)
// 		{
// 			same = false;
// 		}
// 	}
// 	int nb = chooseNbPawn(n);
// 	Player d(namePlayer,x,nb);
// 	return d;
// }


