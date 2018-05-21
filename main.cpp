#include "./src/game.cpp";
#include "./src/display.cpp";
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cout<<"---------------------------------- Initialisation du jeu --------------------------------"<<endl;
	cout<<"   |       ||||||            ||         ||||      ||||   ||||||||||         ||||        |    "<<endl;
	cout<<"   |       ||    ||         ||||        ||  ||  ||  ||   ||               ||    ||      |    "<<endl;
	cout<<"   |       ||      ||      ||  ||       ||    ||    ||   ||             ||        ||    |    "<<endl;
	cout<<"   |       ||      ||     ||    ||      ||          ||   ||||||||||     ||        ||    |    "<<endl;
	cout<<"   |       ||      ||    ||||||||||     ||          ||   ||             ||        ||    |    "<<endl;
	cout<<"   |       ||    ||     ||        ||    ||          ||   ||               ||    ||      |    "<<endl;
	cout<<"   |       ||||||      ||          ||   ||          ||   ||||||||||         ||||        |    "<<endl;
	cout<<"-----------------------------------------------------------------------------------------"<<endl;


	int size;
	int x;
	int y;
	int x2;
	int y2;

	Player player1 ("*");
	Player player2 ("o");

	cout<< "Veuillez choisir une taille entre 4 et 16 : ";
	cin>>size;

	Board board(size);
	board.initBoard(player1, player2);
	Display::displayBoard(board);

		/*do
	}
	{
		cout<<"\nPour lire les règles du jeu, Tapez 1.\n";
		cout<<" Pour démarrer une partie, Tapez 2.\n";
		cout<<" Pour charger une partie, Tapez 3."
		cout<<" Pour quitter le jeu, Tapez 0.\n";
		cout<<" Votre choix: ";
		cin >> choix;

		switch(choix)
		{
			case 0:
			cout<<"Voulez-vous vraiment quitter le jeu ?\n";
			cout<<" Tapez 1 pour confirmer, sinon Tapez 0.\n";
			cout<<" \nVotre choix: ";
			cin >> valider;
			if(valider == 1)
				cout<<"\n Aurevoir !\n";
			break;

			case 1: AFFICHAGE REGLES();
			break;
			case 2:
			cout<<" \nCréation d'une nouvelle partie en cours...\n";
			creation_map(board);
			nombreJoueurs(joueurs);
			deplacement_joueurs(joueurs,board);
			break;
			default: cout<<"\n Le nombre saisi n'est pas correct, veuillez recommencer, Merci."<<endl;
		}
	}*/

	return 0;
}