#include "etat9.h"

void Etat9::Transition(Automate * a, Symbole * s){
    a->setLecture(false);
    cout<<"Execution Etat 9 "<<endl;
    switch(int(*s)){
        case PLUS:
        {    
            cout<<"Depilement etat 9 par la regle 4 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();
            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            a->empilerSymbole(s2);
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    cout<<"Empilement etat 1"<<endl;
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    cout<<"Empilement etat 6"<<endl;
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    cout<<"Empilement etat 7"<<endl;
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    cout<<"Empilement etat 8"<<endl;
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        
        }
        case MULT:
        {    
            cout<<"Depilement etat 9 par la regle 4 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();
            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            a->empilerSymbole(s2);
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    cout<<"Empilement etat 1"<<endl;
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    cout<<"Empilement etat 6"<<endl;
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    cout<<"Empilement etat 7"<<endl;
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    cout<<"Empilement etat 8"<<endl;
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        
        }
        case CLOSEPAR:
        {    
            cout<<"Depilement etat 9 par la regle 4 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();
            
            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            a->empilerSymbole(s2);
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    cout<<"Empilement etat 1"<<endl;
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    cout<<"Empilement etat 6"<<endl;
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    cout<<"Empilement etat 7"<<endl;
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    cout<<"Empilement etat 8"<<endl;
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        
        }
        case FIN:
        {    
            cout<<"Depilement etat 9 par la regle 4 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();

            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            a->empilerSymbole(s2);
            switch (a->getPileEtat().top()->getNum())
                {
                case 0:
                    cout<<"Empilement etat 1"<<endl;
                    a->empilerEtat(new Etat1());
                    break;
                case 2:
                    cout<<"Empilement etat 6"<<endl;
                    a->empilerEtat(new Etat6());
                    break;
                case 4:
                    cout<<"Empilement etat 7"<<endl;
                    a->empilerEtat(new Etat7());
                    break;
                case 5:
                    cout<<"Empilement etat 8"<<endl;
                    a->empilerEtat(new Etat8());
                    break;
                
                }
            break;  
        
        }
    }
}