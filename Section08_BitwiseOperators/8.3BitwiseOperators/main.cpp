#include <iostream>
#include <iomanip>
#include <bitset>

int main(){

  const int COLUMN_WIDTH {20};
  unsigned char value1 {0x3}; // 0000 0011
  unsigned char value2 {0x5}; // 0000 0101

  std::cout << std::left;

  std::cout << std::setw(COLUMN_WIDTH) << "Values:";
  std::cout << std::setw(COLUMN_WIDTH) << "value1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl;
  std::cout << std::setw(COLUMN_WIDTH) << " ";
  std::cout << std::setw(COLUMN_WIDTH) << "value2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;
  std::cout << std::endl;
  
  // AND
  std::cout << std::setw(COLUMN_WIDTH) << "Bitwise AND: ";
  std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2: "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2);
  std::cout << std::endl;
  

  // OR
  std::cout << std::setw(COLUMN_WIDTH) << "Bitwise OR: ";
  std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2: "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2);
  std::cout << std::endl;

  // XOR
  std::cout << std::setw(COLUMN_WIDTH) << "Bitwise XOR: ";
  std::cout << std::setw(COLUMN_WIDTH) << "value1 ^ value2: "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 ^ value2);
  std::cout << std::endl;

  std::cout << std::endl;

  // NOT
  std::cout << std::setw(COLUMN_WIDTH) << "Bitwise NOT: ";
  std::cout << std::setw(COLUMN_WIDTH) << "~value1 "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1);
  std::cout << std::endl;

  std::cout << std::setw(COLUMN_WIDTH) << " ";
  std::cout << std::setw(COLUMN_WIDTH) << "~value2 "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2);
  std::cout << std::endl;

  std::cout << std::setw(COLUMN_WIDTH) << " ";
  std::cout << std::setw(COLUMN_WIDTH) << "~01011001: "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0b01011001);
  std::cout << std::endl;

  std::cout << std::setw(COLUMN_WIDTH) << " ";
  std::cout << std::setw(COLUMN_WIDTH) << "~01011001: "; 
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0x59);
  std::cout << std::endl;
  
  return 0;
}
