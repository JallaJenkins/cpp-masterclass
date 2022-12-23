#include <iostream>

int main(){

  std::cout << "Enter a integer: ";
  int x;
  std::cin >> x;

  if (x % 2 == 0){
    std::cout << x << " is even!\n";
  } else {
    std::cout << x << " is odd!\n";
  }

  return 0;
}
