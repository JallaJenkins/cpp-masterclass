#include <iostream>
#include "exercise.h"

int main(){

  CU::string left("left ", 5);
  std::cout << "Created left\n";
  CU::string right("right", 5);
  std::cout << "Created right\n";

  CU::string result = left + right;
  std::cout << "Added left and right\n";
  std::cout << result.c_str() << '\n';

  return 0;
}
