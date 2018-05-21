#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pawn 
{
	private:
		bool hasBeenPlayed;

	public:
		Plateau(int, int);
		void setHasBeenPlayed(bool);
		bool getHasBeenPlayed();
}