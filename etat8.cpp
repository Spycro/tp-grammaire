#include "etat8.h"

void Etat8::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 8 "<<endl;
    switch(int(*s)){
        case PLUS:
        {    
            cout<<"Depilement etat 8 par la regle 3 "<<endl;
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
        {    
            cout<<"Depilement etat 8 par la regle 3 "<<endl;
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
        case CLOSEPAR:
        {    
            cout<<"Depilement etat 8 par la regle 3 "<<endl;
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
            cout<<"Depilement etat 8 par la regle 3 "<<endl;
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