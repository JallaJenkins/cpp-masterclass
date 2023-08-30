#include <iostream>
#include "player.h"

int main(){

  Player p1("Basketball", "John", "Snow");
  // p1.first_name = "Jason"; // Member still private - compiler error
  std::cout << "player: " << p1 << '\n';

  return 0;
}
