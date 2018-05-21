#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

class Player
{
	private:
		map<Coord, Pawn> pawns;
		string symbol;

	public:
		Player(string);
		void addPawn(Coord, Pawn);
		void removePawn(Coord);
		int getPawnAmount();
		

};

/*class ListePawn
{
	std::string

};*/