#include <iostream>
#include <iomanip>

int main(){
  
  float number1 {1.12345678901234567890f};
  double number2 {1.12345678901234567890};
  long double number3 {1.12345678901234567890L};

  std::cout << "sizeof float: " << sizeof(float) << std::endl;
  std::cout << "sizeof double: " << sizeof(double) << std::endl;
  std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

  std::cout << std::setprecision(20);
  std::cout << "number1 is: " << number1 << std::endl;
  std::cout << "number2 is: " << number2 << std::endl;
  std::cout << "number3 is: " << number3 << std::endl;

  float number4 = 192400023.0f;
  std::cout << "number4 is: " << number4 << std::endl;

  std::cout << "-----------------------------" << std::endl;

  double number5 {192400023};
  double number6 {1.92400023e8};
  double number7 {1.924e8};

  double number8 {0.00000000003498};
  double number9 {3.498e-11};

  std::cout << "number5 is: " << number5 << std::endl;
  std::cout << "number6 is: " << number6 << std::endl;
  std::cout << "number7 is: " << number7 << std::endl;
  std::cout << "number8 is: " << number8 << std::endl;
  std::cout << "number9 is: " << number9 << std::endl;

  //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ 5.6 };
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0

    //Infinity
    double result { number10 / number11 };
    
    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

  return 0;
}
