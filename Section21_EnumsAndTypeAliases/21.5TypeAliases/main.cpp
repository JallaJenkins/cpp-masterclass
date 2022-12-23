#include <iostream>

int main(){

  // using HugeInt = unsigned long long int;  // modern way
  typedef unsigned long long int HugeInt;  // old way

  // unsigned long long int huge_number {12345678789};
  HugeInt huge_number {12345567897};
  std::cout << "huge_number: " << huge_number << '\n';
  std::cout << "sizeof(unsigned long long int): " << sizeof(unsigned long long int) << '\n';
  std::cout << "sizeof(HugeInt): " << sizeof(HugeInt) << '\n';


  return 0;
}
