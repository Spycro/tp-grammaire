#include "automate.h"
#include <iostream>

using namespace std;

Automate::Automate(){
    Etat * e = new Etat0();
    pileEtat.push(e);
    fin=false;
}


void Automate::EtatSuivant(Automate * a, Symbole * s){
    pileEtat.top()->Transition(a, s);
}

void Automate::empilerEtat(Etat * e){
    this->pileEtat.push(e);
}

void Automate::empilerSymbole(Symbole * s){
    this->pileSymbole.push(s);
}

Etat* Automate::depilerEtat(){
    Etat * e = this->pileEtat.top();
    this->pileEtat.pop();
    return e;
}

Symbole* Automate::depilerSymbole(){
    Symbole * s = this->pileSymbole.top();
    this->pileSymbole.pop();
    return s;
}