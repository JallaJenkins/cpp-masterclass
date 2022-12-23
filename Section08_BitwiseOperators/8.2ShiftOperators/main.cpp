#include <iostream>
#include <bitset>

int main(){

  unsigned short int value{0xff0u};
  
  std::cout << "Size of short int: " << sizeof(short int) << std::endl;

  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value << 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value >> 1);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  value = static_cast<unsigned short int>(value >> 4);
  std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

  std::cout << "value: " << (value >> 1) << std::endl;

  return 0;
}
