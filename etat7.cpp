#include "etat7.h"

void Etat7::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 7 "<<endl;
    switch(int(*s)){
        case PLUS:
        {    
            cout<<"Depilement etat 7 par la regle 2 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
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
            cout<<"Empilement etat 5 "<<endl;
            a->empilerEtat(new Etat5());
            a->empilerSymbole(s);
            break;
        case CLOSEPAR:
        {    
            cout<<"Depilement etat 7 par la regle 2 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
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
            cout<<"Depilement etat 7 par la regle 2 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
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