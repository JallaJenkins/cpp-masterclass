#include <iostream>
#include "dog.h"

// This cuases no problem because we are working with a copy
void function_taking_dog(Dog dog){
  dog.set_name("Internal dog");
  dog.print_info();
}

// Parameter by reference
void function_taking_dog_ref(Dog& dog_ref){
  // Compiler won't allow passing const arg by ref
}

// Parameter by const ref
void function_taking_const_dog_ref(const Dog& dog_ref){
  // Compiler will allow passing but cannot operate on dog_ref
  // const_dog_ref.set_name("Hello"); // compiler error
  // const_dog_ref.print_info(); // compiler error
}

// Parameter by pointer to non const
void function_taking_dog_p(Dog* p_dog){
  // Compiler won't allow passing const argument - compiler error
}

// Parameter pass as pointer to const
// Will pass parameter by will not allow operations on object
void function_taking_pointer_to_const_dog(const Dog* const_p_dog){
  // const_p_dog->set_name("Hello"); // compiler error
  // const_p_dog->print_info(); // compiler error
}

int main(){

  const Dog dog1("Fluffy", "Shepherd", 2);
  std::cout << "address of dog1: " << &dog1 << '\n';

  // Function taking paramater by value: WORKS
  function_taking_dog(dog1);

  // Function taking parameter by reference - cannot pass 
  // function_taking_dog_ref(dog1); // compiler error

  // Funtion taking parameter by const reference - can pass
  // function_taking_const_dog_ref(dog1); // function cannot operate on dog1

  // Function taking parameter by pointer to non-const - cannot pass
  // function_taking_dog_p(&dog1); // Compiler error

  // function taking parameter by pointer to const - can pass
  // function_taking_const_dog_ref(dog1); // function cannot operate on dog1

  return 0;
}
