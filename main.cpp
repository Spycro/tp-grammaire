#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "etat.h"

int main(void) {
   string chaine("(1+55*2)+(7*4+2+3*(4+5))");

   Lexer l(chaine);
   Automate * automata = new Automate();
   Symbole * s;
   while(!automata->getFin()) {
      s=l.Consulter();
      s->Affiche();
      cout<<endl;

      automata->setLecture(true);
      automata->EtatSuivant(automata, s);
      if(automata->getLecture())
         l.Avancer();
      cout<<"\tEtat du haut de la pile : "<<automata->getPileSymbole().top()->getInt()<<endl;

   }

   int res = automata->depilerSymbole()->getInt();
   cout<<"Resultat : "<<res<<endl;
   return 0;
}

