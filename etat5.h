#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"


using namespace std;

class Etat5 : public Etat {
    public:
        Etat5() : Etat() { num = 5 ; }

        void Transition(Automate * a, Symbole * s);
};