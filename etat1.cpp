#include "etat1.h"

void Etat1::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 1 "<<endl;
    switch(int(*s)){
        case PLUS:
            cout<<"Empilement etat 4 "<<endl;
            a->empilerEtat(new Etat4());
            a->empilerSymbole(s);
            break;
        case MULT:
            cout<<"Empilement etat 5 "<<endl;
            a->empilerEtat(new Etat5());
            a->empilerSymbole(s);
            break;
        case FIN:
            cout<<"ACCEPTER"<<endl;
            break;
    }
}