#include <iostream>

inline int age{13};

inline void some_function(){
  std::cout << "age: " << age << '\n';
  std::cout << "&age: " << &age << '\n';
}

void print_age_utility2(){
  std::cout << "Printing from utility2:\n";
  some_function();
}