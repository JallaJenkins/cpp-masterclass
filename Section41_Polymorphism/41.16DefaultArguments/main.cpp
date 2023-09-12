#include <iostream>
#include "derived.h"

int main(){

  Base* base_ptr1 = new Derived;
  double result = base_ptr1->add(); // Uses Dervied method with Base default args
  std::cout << "Result (base_ptr): " << result << '\n';

  std::cout << "-----------------------------\n";

  Derived derived1;
  Base& base_ref1 = derived1;
  result = base_ref1.add(); // Uses Dervied method with Base default args
  std::cout << "Result (base_ref): " << result << '\n'; 

  std::cout << "-----------------------------\n";

  Base base3;
  result = base3.add();
  std::cout << "Result (raw base): " << result << '\n'; 

  std::cout << "-----------------------------\n";

  Derived derived2;
  result = derived2.add();
  std::cout << "Result (raw derived): " << result << '\n'; 

  std::cout << "-----------------------------\n";

  Base base1 = derived2;
  result = base1.add();
  std::cout << "Result (raw derived sliced): " << result << '\n'; 

  return 0;
}
