#include <iostream>
#include <iomanip>
#include <bitset>

int main(){

  const int COLUMN_WIDTH {20};

  std::cout << "Compound bitwise assignment operators" << std::endl;
  std::cout << std::endl;

  unsigned char sandbox_var{0b00110100};

  // Print out initial value
  std::cout << "Initial Value: " << std::endl;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  std::cout << "Shift 2 bits left: " << std::endl;
  sandbox_var <<=2;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  std::cout << "Shift 4 bits right: " << std::endl;
  sandbox_var >>=4;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  std::cout << "Compound OR with 0000 1111: " << std::endl;
  sandbox_var |= 0b00001111;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  std::cout << "Compound AND with 0000 0000: " << std::endl;
  sandbox_var &= 0b00000000;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  std::cout << "Compound XOR with 0000 0011: " << std::endl;
  sandbox_var ^= 0b00000011;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  std::cout << "Compound AND with 0000 0000: " << std::endl;
  sandbox_var &= 0b00000000;
  std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: ";
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var);
  std::cout << std::endl;

  return 0;
}
