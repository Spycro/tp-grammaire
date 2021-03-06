#pragma once

#include <stack>
#include <string>
#include "symbole.h"
#include "etat.h"
#include "etat0.h"
#include "etat1.h"
#include "etat2.h"
#include "etat3.h"
#include "etat4.h"
#include "etat5.h"
#include "etat6.h"
#include "etat7.h"
#include "etat8.h"
#include "etat9.h"


using namespace std;



class Automate {

    public:
        Automate();
        ~Automate() { }

        void EtatSuivant(Automate * a, Symbole * s);
        void empilerEtat(Etat * e);
        void empilerSymbole(Symbole * s);
        void depilerEtat();
        Symbole* depilerSymbole();
        bool getLecture(){ return lecture; }
        void setLecture(bool b){ this->lecture=b ; }
        bool getFin(){ return this->fin; }
        void setFin(bool f){ this->fin=f; }
        stack<Etat*> getPileEtat() {return pileEtat;}
        stack<Symbole*> getPileSymbole() {return pileSymbole;}

    protected:
        stack<Etat*> pileEtat;
        stack<Symbole*> pileSymbole;
        bool lecture;
        bool fin;

};
