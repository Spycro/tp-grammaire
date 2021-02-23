#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat9 : public Etat {
    public:
        Etat9() : Etat() { num = 9 ; }

        void Transition(Automate * a, Symbole * s);
};