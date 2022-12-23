#include <iostream>

int dog_count{2};

void say_age(const int* const age);

int main(){

  int age(23);
  std::cout << "age (before call): " << age << " &age: " << &age <<'\n';
  say_age(&age);
  std::cout << "age (after call): " << age << " &age: " << &age << '\n';

  return 0;
}

void say_age(const int* const age) { 
  // ++(*age);  // Value no longer modifiable
  std::cout << "Hello, you are " << *age << " years old! &age: " << age << '\n';
  age = &dog_count;  // Pointer no longer redirectable
}