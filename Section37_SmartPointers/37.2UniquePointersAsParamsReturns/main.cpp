#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

void do_something_with_dog_v1(std::unique_ptr<Dog> d){
  d->print_info();
}

void do_something_with_dog_v2(const std::unique_ptr<Dog>& d){
  d->set_dog_name("Rior");
  d->print_info();
  // d.reset(); // Compiler error if paramter is const
}

std::unique_ptr<Dog> get_unique_ptr(){
  std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("function local");
  std::cout << "unique_ptr address(in): " << &p_dog << '\n';
  return p_dog;  // Compiler will choose whether the return a reference or a copy depending on its opitmization protocols; most modern compilers will return by reference
}

int main(){

  /*
  // Passing unique ptr to function by value
  std::unique_ptr<Dog> p_dog_1 = std::make_unique<Dog>("Dog1");

  // Can't pass unique_ptr by value to a function b/c copies not allowed
  // do_something_with_dog_v1(p_dog_1);  // Compiler error

  // Use std::move
  // Owndership of the pointer will move to the function body
  // p_dog_1 is reset to nullptr
  do_something_with_dog_v1(std::move(p_dog_1));

  std::cout << "p_dog_1: " << p_dog_1.get() << '\n';
  std::cout << "Back to the main function\n";\
  */

  std::cout << "---------\n";

  // std::unique_ptr<Dog> p_dog_1 = std::make_unique<Dog>("Dog1");

  /*
  Person person1("John");
  person1.adopt_dog(std::move(p_dog_1)); // Move to fn and reset to nullptr
  std::cout << "Doing something, p_dog_1 poitns to: " << p_dog_1.get() << '\n';
  */

  // An implicit move occurs when temp object is created in place
  // Avoids error of sending existing dog pointer to function
  // do_something_with_dog_v1(std::make_unique<Dog>("Temporary Dog"));
  // std::cout << "delimiter\n";

  /*
  // Can pass the std::unique_ptr parameter by reference
  std::unique_ptr p_dog_2 = std::make_unique<Dog>("Dog2");
  p_dog_2->print_info();
  do_something_with_dog_v2(p_dog_2);
  std::cout << "-----------\n";
  p_dog_2->print_info();
  */

  /*
  // Returning unique_ptr from function by value
  std::unique_ptr<Dog> p_dog_3 = get_unique_ptr();
  std::cout << "--------\n";
  std::cout << "unique_ptr address(out): " << &p_dog_3 << '\n';
  */

  get_unique_ptr()->print_info();

  std::cout << "function done\n";

  return 0;
}
