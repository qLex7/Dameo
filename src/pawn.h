#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pawn 
{
	private:
		bool hasBeenPlayed;
		string symbol;

	public:
		Pawn(string);
		void setHasBeenPlayed(bool);
		bool getHasBeenPlayed();
		string getSymbol();
}