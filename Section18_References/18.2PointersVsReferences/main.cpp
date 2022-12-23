#include <iostream>

int main(){

  // Declare pointer and reference
  double double_value {12.34};
  double& ref_double_value {double_value};  // Initialization required; otherwise compiler error
  double* p_double_value {&double_value};

  // Reading
  std::cout << "double_value: " << double_value << '\n';
  std::cout << "ref_double_value: " << ref_double_value << '\n';
  std::cout << "p_double_value: " << p_double_value << '\n';
  std::cout << "*p_double_value: " << *p_double_value << '\n';

  // Writing through the pointer
  *p_double_value = 15.44;
  std::cout << '\n';
  std::cout << "double_value: " << double_value << '\n';
  std::cout << "ref_double_value: " << ref_double_value << '\n';
  std::cout << "p_double_value: " << p_double_value << '\n';
  std::cout << "*p_double_value: " << *p_double_value << '\n';

  // Writing through reference
  ref_double_value = 18.44;

  std::cout << '\n';
  std::cout << "double_value: " << double_value << '\n';
  std::cout << "ref_double_value: " << ref_double_value << '\n';
  std::cout << "p_double_value: " << p_double_value << '\n';
  std::cout << "*p_double_value: " << *p_double_value << '\n';

  double some_other_double {78.45};

  ref_double_value = some_other_double;  // reassigns double_value to new value; reference continues to point to double_value

  std::cout << '\n';
  std::cout << "double_value: " << double_value << '\n';
  std::cout << "ref_double_value: " << ref_double_value << '\n';
  std::cout << "p_double_value: " << p_double_value << '\n';
  std::cout << "*p_double_value: " << *p_double_value << '\n';

  p_double_value = &some_other_double;  // This will work to reassign the pointer

  std::cout << '\n';
  std::cout << "Reassigning the pointer...\n";
  std::cout << "double_value: " << double_value << '\n';
  std::cout << "ref_double_value: " << ref_double_value << '\n';
  std::cout << "&double_value: " << &double_value << '\n';
  std::cout << "&ref_double_value: " << &ref_double_value << '\n';
  std::cout << "p_double_value: " << p_double_value << '\n';
  std::cout << "*p_double_value: " << *p_double_value << '\n';

  *p_double_value = 555.5;

  std::cout << '\n';
  std::cout << "double_value: " << double_value << '\n';
  std::cout << "ref_double_value: " << ref_double_value << '\n';
  std::cout << "&double_value: " << &double_value << '\n';
  std::cout << "&ref_double_value: " << &ref_double_value << '\n';
  std::cout << "p_double_value: " << p_double_value << '\n';
  std::cout << "*p_double_value: " << *p_double_value << '\n';


  return 0;
}
