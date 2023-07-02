#include <iostream>
#include <memory>

#include "dog.h"

std::unique_ptr<Dog> get_unique_ptr() {
  std::unique_ptr<Dog> dog_ptr_internal = std::make_unique<Dog>("Phil");
  return dog_ptr_internal;
}

int main(){

  // Create shared pointers from unique_ptrs
  std::unique_ptr<int> unique_ptr_int_1 = std::make_unique<int>(22); // Heap object
  std::unique_ptr<Dog> unique_ptr_dog_1 = std::make_unique<Dog>("Halz"); // Heap object

  // Have to use std::move here
  // Unique pointers are reset to nulptr
  std::shared_ptr<int> shared_ptr_int_1 = std::move(unique_ptr_int_1);
  std::shared_ptr<Dog> shared_ptr_dog_1 = std::move(unique_ptr_dog_1);
  
  // Direct assignment not allowed
  // std::shared_ptr<Dog> shared_ptr_dog_2 = unique_ptr_dog_1; // Compiler error

  std::cout << "shared_ptr_int_1 use count: " << shared_ptr_dog_1.use_count() << '\n';
  std::cout << std::boolalpha;
  std::cout << "unique_ptr_int_1: " << static_cast<bool>(unique_ptr_int_1) << '\n';
  std::cout << "unique_ptr_dog_1: " << static_cast<bool>(unique_ptr_dog_1) << '\n';

  std::cout << "unique_ptr_int_1: " << unique_ptr_int_1 << '\n';
  std::cout << "unique_ptr_dog_1: " << unique_ptr_dog_1 << '\n';

  // Can create copies now
  std::cout << '\n';
  std::cout << "Making copies...\n";
  std::shared_ptr<int> shared_ptr_int_3 {shared_ptr_int_1};
  std::shared_ptr<Dog> shared_ptr_dog_3 {shared_ptr_dog_1};

  std::cout << "shared_ptr_int_1 use count: " << shared_ptr_int_1.use_count() << '\n';
  std::cout << "shared_ptr_dog_1 use count: " << shared_ptr_dog_1.use_count() << '\n';
  std::cout << "shared_ptr_int_3 use count: " << shared_ptr_int_3.use_count() << '\n';
  std::cout << "shared_ptr_dog_3 use count: " << shared_ptr_dog_3.use_count() << '\n';

  // Cant move shared ptr to unique ptr
  // std::unique_ptr<int> unique_ptr_illegal_1 {shared_ptr_int_3}; // Compiler error
  // std::unique_ptr<int> unique_ptr_illegal_2 = shared_ptr_int_3} // Compiler error
  // std::unique_ptr<int> unique_ptr_illegal_3 = std::move(shared_ptr_int_3); // Compiler error

  // Returning unique_ptr to unique_ptr
  std::cout << '\n';
  std::cout << "Returning unique_ptr from function to unique_ptr\n";
  std::unique_ptr<Dog> unique_ptr_dog_2 = get_unique_ptr(); // Implicity moves ownership of pointer

  if(unique_ptr_dog_2)
    std::cout << "unique_ptr_dog_2 dog name: " << unique_ptr_dog_2->get_name() << '\n';

  // Returning unique_ptr to shared_ptr
  std::cout << '\n';
  std::cout << "Returning unique_ptr from function to shared ptr\n";
  std::shared_ptr<Dog> shared_ptr_dog_4 = get_unique_ptr(); // Implicitly moves ownership of pointer and conversts to shared_ptr

  if(shared_ptr_dog_4){
    std::cout << "shared_ptr_dog_4 name: " << shared_ptr_dog_4->get_name() << '\n';
    std::cout << "shared_ptr_dog_4 use count: " << shared_ptr_dog_4.use_count() << '\n';
  }


  return 0;
}
