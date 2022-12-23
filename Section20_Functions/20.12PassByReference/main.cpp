#include <iostream>

void say_age(int& age);

int main(){

  int age(23);
  std::cout << "age (before call): " << age << " &age: " << &age <<'\n';
  say_age(age);
  std::cout << "age (after call): " << age << " &age: " << &age << '\n';

  int& ref_age {age};
  ref_age = 40;

  int date{1972};
  ref_age = date;
  std::cout << "age (after call): " << age << " &age: " << &age << '\n';

  return 0;
}

void say_age(int& age) { 
  age = 30;  
  std::cout << "Hello, you are " << age << " years old! &age: " << &age << '\n';
}