#include <iostream>
#include "lexer.h"
#include "automate.h"
#include "etat.h"

int main(void) {
   string chaine("(1+34)*123");

   Lexer l(chaine);
   Automate * automata = new Automate();
   Symbole * s;
   while(*(s=l.Consulter())!=FIN) {
      s->Affiche();
      cout<<endl;
      
      automata->EtatSuivant(automata, s);
      l.Avancer();
   }
   return 0;
}

