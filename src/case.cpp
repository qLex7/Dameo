#include "case.h"

using namespace std;

Case::Case(Coord coord, Pawn pawn = NULL){
    this->pawn = pawn;
    this->coord = coord
}

Coord Case::getCoord(){
    return this->getCoord();
}

void Case::setCoord(Coord coord){
    this->coord = coord;
}

Pawn Case::getPawn(){
    return this->pawn;
}

void Case::setPawn(Pawn pawn){
    this->pawn = pawn;
}