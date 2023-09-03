#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){

  /*
  Engineer eng1("Daniel Gray", 41, "Green Sky", 12);
  std::cout << "-----------------------------\n";
  Engineer eng2(eng1);
  std::cout << "eng2: " << eng2 << '\n';
  */

  CivilEngineer eng1("Daniel Gray", 41, "Green Sky", 12, "Road Strength");
  std::cout << "-----------------------------\n";
  CivilEngineer eng2(eng1);
  std::cout << "eng2: " << eng2 << '\n';

  return 0;
}
