#include <iostream>
#include "dog.h"

int main(){

  // Dog dog1;

  Animal* p_animal = new Dog;
  delete p_animal; // with static binding, will be undefined! Need to impliment a virtual destructor


  return 0;
}
