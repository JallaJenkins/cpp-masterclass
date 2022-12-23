#include <iostream>

int main(){

  int increment{5};
  int number1{10};
  int number2{20};
  int number3{25};
  int result = (number1 *= ++increment, number2 - (++increment), number3 + ++increment);
  std::cout << "number1: " << number1 << "\n";
  std::cout << "number2: " << number2 << "\n";
  std::cout << "number3: " << number3 << "\n";
  std::cout << "result: " << result << "\n";
  
  return 0;
}
