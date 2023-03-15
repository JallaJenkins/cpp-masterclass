#include <iostream>
#include <string>
#include "dog.h"

int main(){

  const Dog dog1("Fluffy", "Shepherd", 2);
  
  for (size_t i{}; i < 10; ++i){
    dog1.print_info();
  }

  std::cout << "Done!\n";
  return 0;
}
