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
  // Compiler will allow passing but cannot alter dog_ref
  // dog_ref.set_name("Hello"); // compiler error
  dog_ref.print_info(); // will work now because print_info is const
}

// Parameter by pointer to non const
void function_taking_dog_p(Dog* p_dog){
  // Compiler won't allow passing const argument - compiler error
}

// Parameter pass as pointer to const
// Will pass const parameter
void function_taking_pointer_to_const_dog(const Dog* const_p_dog){
  // const_p_dog->set_name("Hello"); // compiler error
  const_p_dog->print_info(); // works because print_info is const
}

int main(){

  const Dog dog1("Fluffy", "Shepherd", 2);
  std::cout << "address of dog1: " << &dog1 << '\n';

  dog1.print_info();  // This will work now b/c print_info is const

  // Function taking paramater by value: WORKS
  // function_taking_dog(dog1);
  // dog1.print_info();

  // Function taking parameter by reference - still cannot pass 
  // function_taking_dog_ref(dog1); // compiler error

  // Funtion taking parameter by const reference - can pass
  // function_taking_const_dog_ref(dog1); // functions will work now

  // Function taking parameter by pointer to non-const - still cannot pass
  // function_taking_dog_p(&dog1); // Compiler error

  // function taking parameter by pointer to const - can pass
  function_taking_const_dog_ref(dog1); // function cannot operate on dog1

  return 0;
}
