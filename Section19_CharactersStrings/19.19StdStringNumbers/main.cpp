#include <iostream>
#include <string>

int main(){

  /*
  // Number to string - std::to_string()
  float float_var {22.3f};
  double double_var {1.34847e5};
  int int_var {223};

  std::string float_str {std::to_string(float_var)};
  std::string double_str {std::to_string(double_var)};
  std::string int_str {std::to_string(int_var)};

  std::cout << "size of float_str: " << float_str.size() << '\n';
  std::cout << "float_var: " << float_var << '\n';
  std::cout << "float_str: " << float_str << '\n';

  std::cout << "double_var: " << double_var << '\n';
  std::cout << "double_str: " << double_str << '\n';

  std::cout << "int_var: " << int_var << '\n';
  std::cout << "int_str: " << int_str << '\n';
  */

  /*
  // +string to number (integral types)
  // Decimal portion gets chapped, not rounded
  std::string number_str{"-34.567"};  // must be reasonable canditate for a number
  // std::string number_str{"13/7"};  // careful - this will chap the denomicator, not round the fraction!
  // std::string number_str{"abc"};  // this will crash program!

  int int_var = std::stoi(number_str);
  std::cout << "int_var: " << int_var << '\n';
  std::cout << "sizeof(int_var): " << sizeof(int_var) << '\n';

  long long_var = std::stol(number_str);
  std::cout << "long_var: " << long_var << '\n';
  std::cout << "sizeof(long_var): " << sizeof(long_var) << '\n';

  long long long_long_var = std::stoll(number_str);
  std::cout << "long_long_var: " << long_long_var << '\n';
  std::cout << "sizeof(long_long_var): " << sizeof(long_long_var) << '\n';
  */

  /*
  // unsigned types will underflow if there is a negative number
  std::string number_str = "34.567";
  // std::string number_str = "-34.567"; // will cause underflow

  std::cout << '\n';
  std::cout << "unsigned long, unsigned long long:\n";

  unsigned long u_l_var = std::stoul(number_str);
  std::cout << "u_l_var: " << u_l_var << '\n';
  std::cout << "sizeof(u_l_var): " << sizeof(u_l_var) << '\n';

  unsigned long long u_ll_var = std::stoull(number_str);
  std::cout << "u_ll_var: " << u_ll_var << '\n';
  std::cout << "sizeof(u_ll_var): " << sizeof(u_ll_var) << '\n';
  */

  // decimal numbers
  std::string number_str = "34.567";

  float float_var = std::stof(number_str);
  std::cout << "float_var: " << float_var << '\n';
  std::cout << "sizeof(float_var): " << sizeof(float_var) << '\n';

  double double_var = std::stod(number_str);
  std::cout << "double_var: " << double_var << '\n';
  std::cout << "sizeof(double_var): " << sizeof(double_var) << '\n';

  long double long_double_var = std::stold(number_str);
  std::cout << "long_double_var: " << long_double_var<< '\n';
  std::cout << "sizeof(long_double_var): " << sizeof(long_double_var) << '\n';

  return 0;
}
