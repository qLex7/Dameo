#pragma once
#include <iostream>

using namespace std;

class Coord 
{
    private:
        int posX;
        int posY;
    
    public:
        Coord(int, int);
        bool isEqual(Coord);
        int getPosX();
        int getPosY();
};