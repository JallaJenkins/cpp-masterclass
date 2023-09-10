#include <iostream>

// Interesting fact
class Plane final{
  Plane()=default;
};

/*
class FighterJet : public Plane {  // Compiler error - Plane is final

};
*/

int main(){

  return 0;
}
