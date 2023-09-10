#include <iostream>
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"


int main(){

  Dog dog1("dark grey", "dog1");
  Cat cat1("black stripes", "cat1");
  Pigeon pigeon1("white", "pigeon1");
  Crow crow1("black", "crow1");

  Animal* animals[]{&dog1, &cat1, &pigeon1, &crow1};

  for(const auto& animal : animals){
    animal->breathe();
  }

  std::cout << "---------------------------\n";

  Dog dog2("dark gray", "dog2");
  Cat cat2("black stripes", "cat2");
  Pigeon pigeon2("white", "pigeon2");  // Will cause compulker error if lumped in with Felines pointers

  Animal animal1("some animal");  // Will also give error in Feline pointer collection

  Feline* felines[]{&dog2, &cat2};

  for(const auto& feline : felines){
    feline->run();
  }

  std::cout << "---------------------------\n";

  Pigeon pigeon3("white", "pigeon3");
  Crow crow3("black", "crow3");

  Bird* birds[]{&pigeon3, &crow3};

  for(const auto& bird : birds){
    bird->fly();
  }

  return 0;
}
