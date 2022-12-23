#include <iostream>
#include <limits>

int main(){

  ////////////////////////////////////////////////
  // unsigned char char_var {55};
  // unsigned char val1 {130};
  // unsigned char val2 {131};

  // char_var = val1 - val2;

  // std::cout << "char_var: " << char_var << std::endl;

  // int n = 2;

  // int x1 = std::numeric_limits<int>::max();
  // int y1= x1 + n;

  // int x2 = std::numeric_limits<int>::min();
  // int y2 = x2 - n;

  // std::cout << "Max int + " << n << ": " << y1 << std::endl;
  // std::cout << "Min int - " << n << ": " << y2 << std::endl;

  //////////////////////////////////////////////////
  unsigned char data {250};

  ++data;
  std::cout << std::hex << "data: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  ++data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  std::cout << std::dec;

  data = 0;

  --data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  --data;
  std::cout << "data: " << static_cast<int>(data) << std::endl;

  return 0;
}
