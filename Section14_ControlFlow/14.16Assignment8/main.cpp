#include <iostream>

int main(){

  std::cout << "Enter x cood: ";
  int x;
  std::cin >> x;

  std::cout << "Enter y cood: ";
  int y;
  std::cin >> y;

  if (x <= 20 && x >= -20 && y <= 10 && y >= -10){
    std::cout << "You are completely surrounded. Don't move!\n";
  } else {
    std::cout << "You're out of reach!\n";
  }

  return 0;
}
