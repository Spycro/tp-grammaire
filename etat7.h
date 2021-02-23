#pragma once

#include <string>
#include "symbole.h"
#include "etat.h"
#include "automate.h"

using namespace std;

class Etat7 : public Etat {
    public:
        Etat7() : Etat() { num = 7 ; }

        void Transition(Automate * a, Symbole * s);
};