#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main(){

  Person person1("Jason Leslie", 27, "42 E 17th Ave");
  std::cout << "person1: " << person1 << '\n';

  std::cout << "-------------------\n";

  Player player;
  player.m_full_name = "Samuel Jackson";  // public - OK
  // player.m_age = 25; // Protected - Compiler error
  // player.m_address = "123 Street"; // Private - Compiler error

  std::cout << "-------------------\n";
  
  Nurse nurse1;
  // nurse1.m_full_name = "Davy Jones"; // protected - Compiler error
  // nurse1.m_age = 51; // Protected - Compiler error
  
  Engineer engineer1;
  // engineer1.m_full_name = "Olivier Godson"; // private - Compiler error
  // engineer1.m_age = 65; // private - Compiler error
  // engineer1.m_address = "Hopscotch Street"; // private from base class

  return 0;
}
