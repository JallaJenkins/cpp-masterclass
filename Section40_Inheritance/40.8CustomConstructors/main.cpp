#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){

  /*
  Person person1("John Snow", 27, "Winterfell");
  std::cout << "person1: " << person1 << '\n';
  */

  /*
  Engineer eng1("John Snow", 27, "Winterfell", 12);
  std::cout << "eng1: " << eng1 << '\n';
  */

  CivilEngineer ce1("John Snow", 27, "Winterfell", 12, "Ice");
  std::cout << "ce1: " << ce1 << '\n';

  return 0;
}
