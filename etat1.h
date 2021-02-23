#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"


using namespace std;

class Etat1 : public Etat {
    public:
        Etat1() : Etat() { num = 1 ; }

        void Transition(Automate * a, Symbole * s);
};