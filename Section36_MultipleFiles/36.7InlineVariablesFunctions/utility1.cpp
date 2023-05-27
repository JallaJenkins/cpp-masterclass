#include "utility.h"
#include <iostream>

inline int age{12};

inline void some_function(){
  std::cout << "age: " << age << '\n';
  std::cout << "&age: " << &age << '\n';
}

void print_age_utility1(){
  std::cout << "Printing from utility1:\n";
  some_function();
}