#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat8 : public Etat {
    public:
        Etat8() : Etat() { num = 8 ; }

        void Transition(Automate * a, Symbole * s);
};