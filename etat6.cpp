#include "etat6.h"

void Etat6::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 6 "<<endl;
    switch(int(*s)){
        case PLUS:
        {
            cout<<"Empilement etat 4 "<<endl;
            a->empilerEtat(new Etat4());
            a->empilerSymbole(s);
            break;
        }
        case MULT:
        {
            cout<<"Empilement etat 5 "<<endl;
            a->empilerEtat(new Etat5());
            a->empilerSymbole(s);
            break;
        }
        case CLOSEPAR:
        {
            cout<<"Empilement etat 9 "<<endl;
            a->empilerEtat(new Etat9());
            a->empilerSymbole(s);
            break;
        }
        default:
            cout<<"Il y a une erreur de grammaire dans la chaine"<<endl;
            a->setFin(true);
            break;

    }
}
