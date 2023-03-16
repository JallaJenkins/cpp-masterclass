#include <iostream>
#include "square.h"

bool compare(const Square& square1, const Square& square2){
  return (square1.surface() > square2.surface());
}

int main(){

  Square s1(100.0);
  Square s2(20.0);

  std::cout << std::boolalpha;
  std::cout << "s1 > s2: " << compare(s1, s2) << '\n';

  // Implicit converstion
  // compiler error only if explicit keyword is used in constructor declaration
  // Otherwise, function call will create a new Square with 145.9 as input param
  std::cout << "s1 > 45.9: " << compare(s1, 145.9) << '\n';   

  return 0;
}
