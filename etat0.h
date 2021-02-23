#pragma once

#include <string>

#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat0 : public Etat {
    public:
        Etat0() : Etat() { num = 0 ; }

        void Transition(Automate * a, Symbole * s);


};