#include <iostream>
#include <string>
#include "dog.h"

int main(){

  Dog dog1("Fluffy", "Shepherd", 2);
  
  // const std::string& str_ref = dog1.compile_dog_info();
  // std::cout << "info: " << str_ref << '\n';

  const unsigned int* int_ptr = dog1.jumps_per_minute();
  std::cout << "jumps per minute: " << *int_ptr << '\n';

  std::cout << "Done!\n";
  return 0;
}
