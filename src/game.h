#pragma once
#include <iostream>
#include <string>

using namespace std;




class Game
{
	private:
		vector<Player>myPlayers;

	public:
		~Game();
		void addPlayer(player);
		bool endOfGame();

};