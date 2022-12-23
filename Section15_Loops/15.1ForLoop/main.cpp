#include <iostream>

int main(){

  /*
  for (unsigned int i{0}; i < 100; i++){
    std::cout << i << ": I love C++!\n";
  }

  std::cout << "Loop done!\n";
  */

  /*
  for (size_t i{0}; i < 10; ++i){
    std::cout << i << ": I love C++\n";
  }
  std::cout << "Loop done\n";
  */

  // std::cout << "sizeof(size_t): " << sizeof(size_t) << "\n";

  // Scope of iterator
  /*
  for (size_t i{0}; i < 10; ++i){
    std::cout << i << ": I love C++\n";
  }
  std::cout << "Loop done\n";
  // std::cout << i << "\n";  // Compiler error; i not in scope
  */

  // Iterator declared outside loop
  /*
  size_t i{0};

  for (i; i < 10; ++i){
    std::cout << i << ": I love C++\n";
  }
  std::cout << "Loop done\n";
  std::cout << "i: " << i << "\n";
  */

  // Without internal iterator declaration
  /*
  size_t i{0};

  for (; i < 10; ++i){
    std::cout << i << ": I love C++\n";
  }
  std::cout << "Loop done\n";
  std::cout << "i: " << i << "\n";
  */

  // Don't hard-code values!

  const size_t COUNT{100};

  for (size_t i{0}; i < COUNT; ++i){
    std::cout << i << ": I love C++\n";
  }
  std::cout << "Loop done\n";

  return 0;
}
