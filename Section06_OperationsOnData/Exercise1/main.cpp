#include <iostream>

int main(){

  double celsius_temp{0.0};
  std::cout << "Degrees Celsuis: ";
  std::cin >> celsius_temp;
  double fahrenheit{(9.0/5) * celsius_temp + 32};
  std::cout << celsius_temp << " Celsuis is " << fahrenheit << " Fahrenheit";

  return 0;
}
