#include <iostream>

int main(){

  int numbers[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  // Reda beyond bounds: Will read garbage or crash program!
  std::cout << "numbers[12]: " << numbers[12] << '\n';

  // Writing beyond bounds has unpredictable results; could crash program or corrupt data in your system
  numbers[12999999] = 1000;
  std::cout << "numbers[12999999]: " << numbers[12999999] << '\n';

  std::cout << "Program ending" << '\n';

  return 0;
}
