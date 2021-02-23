#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "etat.h"

int main(void) {
   string chaine("(1+55*2)+(7*4+2+3*(4+5))+5*5*5*5+4*5+4*5+(6*7*8+3)");

   Lexer l(chaine);
   Automate * automata = new Automate();
   Symbole * s;
   while(!automata->getFin()) {
      s=l.Consulter();
      cout<<endl;
      cout<<"Symbole a analyser : ";
      s->Affiche();
      cout<<endl;

      automata->setLecture(true);
      automata->EtatSuivant(automata, s);
      if(automata->getLecture())
         l.Avancer();

   }
   Symbole * sres = automata->depilerSymbole();
   int res = sres->getInt();
   cout<<endl;
   cout<<"Resultat : "<<res<<endl;


   // Cleaning up memory
   while(!automata->getPileEtat().empty()){
      automata->depilerEtat();
   }
   while(!automata->getPileSymbole().empty()){
      Symbole * a = automata->depilerSymbole();
      delete a; 
   }
   delete s;
   delete sres;
   delete automata;
   return 0;
}

