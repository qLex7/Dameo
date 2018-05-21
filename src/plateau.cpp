#include "plateau.h"
#include "player.cpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Plateau::Plateau(int nb)
{
	this -> taille = nb;
	vi.resize(taille); 
	for(int i(0); i<taille;i++) 
		{ 
			vi[i]=(vector<int>(taille,(0)));  
		}
}



void Plateau::afficheMap()
{
	for(int i(0); i < taille; i++)
	{
		cout<< "   "<<i;

	}
	cout<<endl;
	cout<<endl;

	for(vector <int> a: vi)
	{
		cout<< " | ";
		for(int b : a)
		{
			cout<<b;
			cout<< " | ";
		}
		cout<<endl;
	}
}

void Plateau::setPlateau() 
{
    int tailleLigneJoueur1; // nombre de pions pour la ligne courante du Joueur 1
    int tailleLigneJoueur2; // nombre de pions pour la ligne courante du Joueur 2
    int espaceMilieu;        // nombre de ligne dediées à l'espace du milieu
    
    const int joueur1 = 1;        // "symbole" du joueur 1
    const int joueur2 = 2;        // "symbole" du joueur 2
    
    // Si la taille du plateau est impaire, l'espace du milieu sera de 3
    espaceMilieu = 2+taille % 2;   
    const int nbLignesJoueurs = (taille - espaceMilieu) / 2; // Nombre de lignes de pions pour chaque joueur
    
    tailleLigneJoueur1 = taille; // Le nombre de pion de la ligne la plus haute du joueur1
                                 // correspond à la taille du plateau
    
    for(int i=0;i<nbLignesJoueurs;i++) 
    {
        // On retire 2 pions par rapport à la ligne précédente pour avoir une forme de pyramide
        vi[i] = this->setLine(vi[i], tailleLigneJoueur1, joueur1);
    	tailleLigneJoueur1 -= 2;
    }
    
    tailleLigneJoueur2 = tailleLigneJoueur1;
    
    int debut = nbLignesJoueurs + espaceMilieu;
    
    for(int i=debut;i<taille;i++) 
    {
        tailleLigneJoueur2 += 2;
        vi[i] = this->setLine(vi[i], tailleLigneJoueur2, joueur2);
    }
}


vector<int> Plateau::setLine(vector<int> line, int nombrePions, int joueur)
{
    const int tailleLigne = line.size();
    vector<int> result(line.size(), 0);
    const int debut = (tailleLigne - nombrePions) / 2;
    
    const int fin = nombrePions + debut;
    
    if (tailleLigne % 2 == nombrePions % 2)
    {
        for (int i=debut;i<fin;i++) 
        {
            result[i] = joueur;
        }
    }
    return result;
}


void Plateau::coordinates(int& x, int& y)
{
	
	cout<< " Entrez les coordonnées x : ";
	cin>>x;
	cout<< " Entrez coordonnées y : ";
	cin>>y;
	cout<< x << " "<< y << endl;
}
void Plateau::move(int x, int y, int x2, int y2, bool& correct, int player)
{
	vi[x][y] = 0;
	vi[x2][y2] = player;
	correct = true;
}

// Bouger un pion
void Plateau::movePawn(int x, int y, int x2, int y2, bool& correct)
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






bool Plateau::outLimit(int x, int y)
{
	return(x < 0 || x >= taille || y < 0 || y >= taille);
}