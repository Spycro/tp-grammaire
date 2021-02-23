#include "etat3.h"

void Etat3::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 3 "<<endl;
    switch(int(*s)){
        case PLUS:
        {
            cout<<"Depilement etat 3 par la regle 5 "<<endl;
            a->depilerEtat();
            switch (a->getPileEtat().top()->getNum())
            {
            case 0:
                a->empilerEtat(new Etat1());
                break;
            case 2:
                a->empilerEtat(new Etat6());
                break;
            case 4:
                a->empilerEtat(new Etat7());
                break;
            case 5:
                a->empilerEtat(new Etat8());
                break;
            
            }
            break;
        }
        case MULT:
        {
            cout<<"Depilement etat 3 par la regle 5 "<<endl;
            a->depilerEtat();
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        }
            
        case CLOSEPAR:
            {
            cout<<"Depilement etat 3 par la regle 5 "<<endl;
            a->depilerEtat();
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        }
        case FIN:
        {
            cout<<"Depilement etat 3 par la regle 5 "<<endl;
            a->depilerEtat();
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        }
    }
}