#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Plateau
{
	private:
		int taille;
		vector<vector<int> > vi;
		bool outLimit(int x,int y);
		vector<int> setLine(vector<int> line, int nombrePions, int joueur);

	public:
		Plateau(int);
		void afficheMap();
		void setPlateau();
		void coordinates(int&,int&);
		void move(int, int, int, int, bool&, int);
		void movePlayer(int, int, int ,int, bool&);
		//void eat();
		//void moveDame();
		//void eatDame();
};

