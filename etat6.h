#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat6 : public Etat {
    public:
        Etat6() : Etat() { num = 6 ; }

        void Transition(Automate * a, Symbole * s);
};