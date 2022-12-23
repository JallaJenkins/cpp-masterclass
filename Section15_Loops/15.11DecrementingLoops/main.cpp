#include <iostream>

int main(){

  const size_t COUNT{5};

  /*
  std::cout << "Incrementing for loop:\n";
  for (size_t i{}; i < COUNT; ++i) {
    std::cout << "i: " << i << "\n";
  }

  std::cout << "\n";
  std::cout << "Decremeting for loop:\n";

  for(size_t i{COUNT}; i > 0; --i){
    std::cout << "i: " << i << "\n";
  }
  */

  /*
  std::cout << "\n" << "Incrementing while:\n";

  size_t i{0};

  while (i < COUNT){
    std::cout << "i: " << i << "\n";
    ++i;
  }

  std::cout << "\nDecrementing while:\n";
  i = COUNT;

  while (i > 0) {
    std::cout << "i: " << i << "\n";
    --i;
  }
  */

  std::cout << "Decrementing do while - infinite:\n";
  unsigned int i = COUNT;

  do {
    std::cout << "i: " << i << "\n";
    --i;
  } while (i >= 0);

  return 0;
}
