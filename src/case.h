#pragma once;

#include "coord.h";
#include "pawn.h";

using namespace std;

class Case {
    private:
        Coord coord;
        Pawn pawn;
    
    public:
        Case(Coord, Pawn);
        Pawn getPawn();
        void setPawn(Pawn);
        Coord getCoord();
        void setCoord(Coord);
}