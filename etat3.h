#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat3 : public Etat {
    public:
        Etat3() : Etat() { num = 3 ; }

        void Transition(Automate * a, Symbole * s);
};