#pragma once
#include <iostream>
using namespace std;

class Automate;


class Etat {

   public:
      Etat(){ }
      virtual ~Etat() { }

      virtual void Transition(Automate * a, Symbole * s) { }
      
      int getNum(){ return num; }
   protected:
      int num;
      
};
