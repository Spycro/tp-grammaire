#include "automate.h"
#include <iostream>

using namespace std;

Automate::Automate(){
    Etat * e = new Etat0();
    pileEtat.push(e);
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

void Automate::depilerEtat(){
    delete this->pileEtat.top();
    this->pileEtat.pop();
}

void Automate::depilerSymbole(){
    delete this->pileEtat.top();
    this->pileSymbole.pop();
}