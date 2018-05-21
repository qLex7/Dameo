#include "case.h"

using namespace std;

Case::Case( Pawn pawn = NULL){
    this->pawn = pawn;
}

Pawn Case::getPawn(){
    return this->pawn;
}

void Case::setPawn(Pawn pawn){
    this->pawn = pawn;
}

bool Case::hasPawn(){
    return this->pawn != NULL
}