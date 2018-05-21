#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pawn 
{
	private:
		bool hasBeenPlayed;
		int posX;
		int posY;

	public:
		Plateau(int, int);
		void setPosX(int);
		void setPosY(int);
		void setHasBeenPlayed(bool);
		int getPosX();
		int getPosY();
		bool getHasBeenPlayed();
}