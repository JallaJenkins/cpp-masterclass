#include <iostream>
#include <memory>
#include "dog.h"

// Passing by value
void use_dog_v1(std::shared_ptr<Dog> dog) {
  std::cout << "shareed_ptr passed by value, dog_name: " << dog->get_name() << '\n';
  std::cout << "use count in use_dog_v1: " << dog.use_count() << '\n';
}

// Passing by non const reference
void use_dog_v2(std::shared_ptr<Dog>& dog) {
  // Since no copy is made, use count does not increase
  dog->set_dog_name("Riol");
  // dog.reset(new Dog()); // this is fine
  std::cout << "shared_ptr passed by non const reference\n";
  std::cout << "dog name changed in function to: " << dog->get_name() << '\n';
  std::cout << "use count in use_dog_v2: " << dog.use_count() << '\n';
}

// Passing by const reference
void use_dog_v3(const std::shared_ptr<Dog>& dog) {
  // No copy is made, no increase in use count
  dog->set_dog_name("Simy"); // no error: const protects the pointer, not the object
  // dog.reset(new Dog()); // error
  std::cout << "shared_ptr passed by non const reference\n";
  std::cout << "dog name changed in function to: " << dog->get_name() << '\n';
  std::cout << "use count in use_dog_v3: " << dog.use_count() << '\n';
}

// Returning by value
// Compiler optimizes so that no extra copies are made when the pointer is returned
std::shared_ptr<Dog> get_shared_ptr_v1(){
  std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v1");
  std::cout << "Managed dog address(in): " << dog_ptr.get() << '\n';
  return dog_ptr;
}

// Returning by reference
// DO NOT DO THIS!!!!!!! May cause crash
// Note there is no compiler error but there is a warning
std::shared_ptr<Dog>& get_shared_ptr_v2(){
  std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v2");
  return dog_ptr;
}

int main(){

  /*
  // Passing by value: A copy will be made, increment the ref count in function body
  std::cout << "'\n";
  std::cout << "Passing shared_ptr by value: " << '\n';

  std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Filld");
  std::cout << "shared_ptr_dog_1 use count (before): " 
            << shared_ptr_dog_1.use_count() << '\n';
  
  use_dog_v1(shared_ptr_dog_1);

  std::cout << "shared_ptr_dog_1 use count (after): " 
            << shared_ptr_dog_1.use_count() << '\n';
  */

  /*
  // Passing by nonconst reference; no copy is made, no use count increase
  std::cout << "Passing by non const reference:\n";
  std::shared_ptr<Dog> shared_ptr_dog_2 = std::make_shared<Dog>("Filld");

  std::cout << "shared_ptr_dog_2 use count before: " 
            << shared_ptr_dog_2.use_count() << '\n';
  
  use_dog_v2(shared_ptr_dog_2);

  std::cout << "shared_ptr_dog_2 use count after: " 
            << shared_ptr_dog_2.use_count() << '\n';
  */

  /*
  // Passing by const reference
  std::cout << "Passing by const reference:\n";
  std::shared_ptr<Dog> shared_ptr_dog_3 = std::make_shared<Dog>("Kitzo");
  std::cout << "shared_ptr_dog_3 use count before: "
            << shared_ptr_dog_3.use_count() << '\n';
  use_dog_v3(shared_ptr_dog_3);
  std::cout << "shared_ptr_dog_3 use count after: "
            << shared_ptr_dog_3.use_count() << '\n';
  */

  /*
  // Returning by value
  std::shared_ptr<Dog> shared_ptr_dog_4 = get_shared_ptr_v1();
  std::cout << "Managed dog address(out): " << shared_ptr_dog_4.get() << '\n';
  std::cout << "shared_ptr_dog_4 use countL " << shared_ptr_dog_4.use_count() << '\n';
  */

  // Returning by reference: not recommended
  std::shared_ptr<Dog>& shared_dog_ptr_5 = get_shared_ptr_v2();
  std::cout << "ref count:" << shared_dog_ptr_5.use_count() << '\n';


  return 0;
}
