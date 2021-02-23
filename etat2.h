#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat2 : public Etat {
    public:
        Etat2() : Etat() { num = 2 ; }

        void Transition(Automate * a, Symbole * s);
};