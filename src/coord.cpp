#include"coord.h";

using namespace std;

Coord::Coord(int x, int y){
    this->posX = x;
    this->posY = y;
}

bool Coord::isEqual(Coord coord) {
    return coord.getPosX() == this->getPosX() &&
           coord.getPosY() == this->getPosY();
}

int Coord::getPosX(){
    return this->getPosX;
}

int Coord::getPosY(){
    return this->getPosX;
}
