#include "etat7.h"

void Etat7::Transition(Automate * a, Symbole * s){
    cout<<"Execution Etat 7 "<<endl;
    switch(int(*s)){
        case PLUS:
        {    
            a->setLecture(false);
            cout<<"Depilement etat 7 par la regle 2 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();
            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            int somme = s1->getInt()+s3->getInt();
            delete s1;
            delete s2;
            delete s3;
            Symbole * aEmpiler = new Entier(somme);
            a->empilerSymbole(aEmpiler);

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
            cout<<"Empilement etat 5 "<<endl;
            a->empilerEtat(new Etat5());
            a->empilerSymbole(s);
            break;
        case CLOSEPAR:
        {    
            a->setLecture(false);
            cout<<"Depilement etat 7 par la regle 2 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();
            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            int somme = s1->getInt()+s3->getInt();
            delete s1;
            delete s2;
            delete s3;
            Symbole * aEmpiler = new Entier(somme);
            a->empilerSymbole(aEmpiler);
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
            a->setLecture(false);
            cout<<"Depilement etat 7 par la regle 2 "<<endl;
            a->depilerEtat();
            a->depilerEtat();
            a->depilerEtat();
            Symbole * s1 = a->depilerSymbole();
            Symbole * s2 = a->depilerSymbole();
            Symbole * s3 = a->depilerSymbole();

            int somme = s1->getInt()+s3->getInt();
            Symbole * aEmpiler = new Entier(somme);
            delete s1;
            delete s2;
            delete s3;
            a->empilerSymbole(aEmpiler);
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
        default:
            cout<<"Il y a une erreur de grammaire dans la chaine"<<endl;
            a->setFin(true);
            break;
    }
}