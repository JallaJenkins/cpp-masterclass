#include <iostream>
#include <memory>
#include "dog.h"

int main(){

  /*
  // Stack variables
  {
  Dog dog1("Dog1");
  // Calling functions on stack objects
  dog1.print_dog();
  }

  std::cout << "Hitting outside scope\n";
  std::cout << "Done!\n";
  */

  /*
  // Using raw pointers: Remember to manually release memory, otherwise you will
  // leak memory

  Dog* p_dog2 = new Dog("Dog2");
  int* p_int1 = new int(100);

  p_dog2->print_dog();
  std::cout << "Integer is: " << *p_int1 << '\n';
  std::cout << "Integer lives at address: " << p_int1 << '\n';

  // If you go out of score without releasing (deleting) p_dog2 and p_dog1
  // you will leak memory
  delete p_dog2;
  delete p_int1;
  */

  /*
  // Using unique_ptr: managed memory is owned by a single pointer at any point
  {
    Dog* p_dog_3 = new Dog("Dog3");
    std::unique_ptr<Dog> up_dog_4(p_dog_3); // Stop using raw pointer
    p_dog_3 = nullptr;
    std::unique_ptr<Dog> up_dog_5{new Dog("Dog5")};
    std::unique_ptr<int> up_int2{new int(200)};
    std::unique_ptr<Dog> up_dog_6(nullptr); // Assign memory to manage later

    // Can use unique pointer just like a raw pointer
    up_dog_5->print_dog();  // Call method with -> operator
    *up_int2 = 500;  // Use dereferencing
    std::cout << "Integer is: " << *up_int2 << '\n';
    std::cout << "Integer lives at address: " << up_int2.get() << '\n';
  }  // Unique pointer memory automatically released at end of block

  std::cout << "Hit outside scope\n";
  */

  /*
  // using make unique syntax. Much cleaner (C++14))
  // Calls new internally for us so we don't have to call it ourselves
  std::unique_ptr<Dog> up_dog_7 = std::make_unique<Dog>("Dog7");
  up_dog_7->print_dog();

  std::unique_ptr<int> p_int3 = std::make_unique<int>(30);
  *p_int3 = 67;
  std::cout << "Value pointed to by p_int3 is: " << *p_int3 << '\n';
  std::cout << "p_int pointing at address: " << p_int3.get() << '\n';
  */

  /*
  // Copies not allowed
  std::unique_ptr<Dog> up_dog_8 = std::make_unique<Dog>("Dog8");
  up_dog_8->print_dog();
  // Can get the wrapped pointer address: useful for older, raw pointer APIs
  std::cout << "Dog8 memory address: " << up_dog_8.get() << '\n';

  // Copies and assignments not allowed
  // std::unique_ptr<Dog> up_dog_9 = up_dog_8; // Compiler error
  // std::unique_ptr<Dog> up_dog_10{up_dog_8}; // Compiler error
  */

  /*
  std::unique_ptr<Dog> up_dog_11 = std::make_unique<Dog>("Dog11");
  std::cout << "Now Dog11 points to: " << up_dog_11.get() << '\n';
  {
    std::unique_ptr<Dog> up_dog_12 = std::move(up_dog_11); // up_dog_11 now
    // points to nullptr

    up_dog_12->print_dog();
    std::cout << "Dog12 memory address: " << up_dog_12.get() << '\n';
    std::cout << "Dog11 is now nullprt: " << up_dog_11.get() << '\n';
  }

  std::cout << "Now Dog11 points to: " << up_dog_11.get() << '\n';
  */

  // Can reset unique_ptr: releases memory and sets to nullptr
  std:: unique_ptr<Dog> up_dog_13 = std::make_unique<Dog>("Dog13");
  // up_dog_13.reset();

  // Can use unique pointer in if statement to see if it points somewhere valid
  if(up_dog_13) {
    std::cout << "up_dog_13 points somewhere valid: " << up_dog_13.get() << '\n';
  } else {
    std::cout << "up_dog_13 points to nullptr: " << up_dog_13.get() << '\n';
  }

  return 0;
}
