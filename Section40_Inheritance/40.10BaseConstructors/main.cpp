#include <iostream>
#include "person.h"
#include "engineer.h"


int main(){

  // Engineer eng1;
  // Engineer eng1("Daniel Grey", 26, "Blue Mountain");
  Engineer eng1("Daniel Grey", 26, "Blue Mountain", 45);
  std::cout << "eng1: " << eng1 << '\n';
  
  return 0;
}
