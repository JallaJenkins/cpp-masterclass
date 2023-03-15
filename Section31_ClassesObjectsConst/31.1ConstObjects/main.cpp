#include <iostream>
#include "dog.h"


int main(){

  const Dog dog1("Fluffy", "Shepherd", 2);

  // Direct access - gives compliler error
  /*
  dog1.print_info();
  dog1.set_name("Milou");
  dog1.print_info();
  */

  // Pointer to nonconst
  // Dog* dog_ptr = &dog1;  // Compiler error

  // Non-const reference
  // Dog& dog_ref = dog1;  // Compiler error

  // Pointer to const
  // const Dog* const_dog_ptr = &dog1;
  // const_dog_ptr->set_name("Milou"); // Compiler error
  // const_dog_ptr->get_name(); // Compiler error

  // Const reference
  const Dog& const_dog_ref = dog1;
  const_dog_ref.set_name("Milou");  // Compiler error
  const_dog_ref.get_name();  // Compiler error







  return 0;
}
