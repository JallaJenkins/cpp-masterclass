#include <iostream>

int main(){

  // Non const reference
  // std::cout << '\n';
  // std::cout << "Non const reference: " << '\n';
  // int age {27};
  // int& ref_age {age};
  // const int& ref_age {age};  // Leads to compiler error if we try to modify later

  /*
  std::cout << "age: " << age << '\n';
  std::cout << "ref_age: " << ref_age << '\n';

  // Can modify original variable through reference
  std::cout << '\n';
  std::cout << "Modifying original variable through reference:\n";

  ref_age++;  // Compiler error if ref_age is const

  std::cout << "age: " << age << '\n';
  std::cout << "ref_age: " << ref_age << '\n';
  */

  // Simulating reference behavious with pointers
  // const int* const p_age {&age};
  // *p_age = 45;  // Compiler error

  const int new_age {35};
  int& ref_new_age {new_age};
  int age1{45};
  // ref_new_age = age1;

  std::cout << "age1: " << age1 << '\n';
  std::cout << "&age1: " << &age1 << '\n';
  std::cout << "new_age: " << new_age << '\n';
  std::cout << "&new_age: " << &new_age << '\n';
  std::cout << "ref_new_age: " << ref_new_age << '\n';
  std::cout << "&ref_new_age: " << &ref_new_age << '\n';

  return 0;
}
