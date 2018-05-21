#pragma once
#include "player.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Board
{
	private:
		int size;
		std::vector<std::vector<Case>> vi;
		bool outLimit(int x,int y);
		vector<int> setLine(int, int, Player);

	public:
		Board(int);
		void initBoard(Player, Player);
		std::vector<std::vector<Case>> getVi();
		int getSize();
		void coordinates(int&,int&);
		void move(int, int, int, int, bool&, int);
		void movePlayer(int, int, int ,int, bool&);
};

