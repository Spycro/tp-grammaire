#include "etat5.h"


void Etat5::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 5 "<<endl;
    switch(int(*s)){
        case INT:
            cout<<"Empilement etat 3 "<<endl;
            a->empilerEtat(new Etat3());
            a->empilerSymbole(s);
            break;
        case OPENPAR:
            cout<<"Empilement etat 2 "<<endl;
            a->empilerEtat(new Etat2());
            a->empilerSymbole(s);
            break;
        default:
            cout<<"Il y a une erreur de grammaire dans la chaine"<<endl;
            a->setFin(true);
            break;
    }
}