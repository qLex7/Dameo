#pragma once

#include "coord.h"
#include "pawn.h"

using namespace std;

class Case {
    private:
        Pawn pawn;
    
    public:
        Case(Pawn);
        Pawn getPawn();
        void setPawn(Pawn);
        bool hasPawn();
};  