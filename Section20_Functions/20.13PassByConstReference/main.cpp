#include <iostream>

void say_age(const int& age);

int main(){

  int age(23);
  std::cout << "age (before call): " << age << " &age: " << &age <<'\n';
  say_age(age);
  std::cout << "age (after call): " << age << " &age: " << &age << '\n';

  return 0;
}

void say_age(const int& age) { 
  ++age;  
  std::cout << "Hello, you are " << age << " years old! &age: " << &age << '\n';
}