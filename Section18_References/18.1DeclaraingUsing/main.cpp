#include <iostream>

int main(){

  int int_data{33};
  double double_data{55.0};

  // Refernces
  int& ref_int_data{int_data};
  double& ref_double_data{double_data};

  // Print stuff out
  std::cout << "int_data: " << int_data << '\n';
  std::cout << "&int_data: " << &int_data << '\n';
  std::cout << "double_data: " << double_data << '\n';
  std::cout << "&double_data: " << &double_data << '\n';

  std::cout << "================================\n";

  std::cout << "ref_int_data: " << ref_int_data << '\n';
  std::cout << "&ref_int_data: " << &ref_int_data << '\n';
  std::cout << "ref_double_data: " << ref_double_data << '\n';
  std::cout << "&ref_double_data: " << &ref_double_data << '\n';

  int_data = 111;
  double_data = 67.2;

  std::cout << '\n';
  std::cout << "int_data: " << int_data << '\n';
  std::cout << "&int_data: " << &int_data << '\n';
  std::cout << "double_data: " << double_data << '\n';
  std::cout << "&double_data: " << &double_data << '\n';

  std::cout << "================================\n";

  std::cout << "ref_int_data: " << ref_int_data << '\n';
  std::cout << "&ref_int_data: " << &ref_int_data << '\n';
  std::cout << "ref_double_data: " << ref_double_data << '\n';
  std::cout << "&ref_double_data: " << &ref_double_data << '\n';

  ref_int_data = 1012;
  ref_double_data = 1000.45;

  std::cout << '\n';
  std::cout << "int_data: " << int_data << '\n';
  std::cout << "&int_data: " << &int_data << '\n';
  std::cout << "double_data: " << double_data << '\n';
  std::cout << "&double_data: " << &double_data << '\n';

  std::cout << "================================\n";

  std::cout << "ref_int_data: " << ref_int_data << '\n';
  std::cout << "&ref_int_data: " << &ref_int_data << '\n';
  std::cout << "ref_double_data: " << ref_double_data << '\n';
  std::cout << "&ref_double_data: " << &ref_double_data << '\n';

  return 0;
}
