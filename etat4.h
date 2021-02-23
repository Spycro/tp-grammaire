#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat4 : public Etat {
    public:
        Etat4() : Etat() { num = 4 ; }

        void Transition(Automate * a, Symbole * s);
};