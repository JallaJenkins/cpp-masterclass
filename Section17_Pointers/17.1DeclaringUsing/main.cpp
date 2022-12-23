#include <iostream>

int main(){

  /*
  // Declare and initialize pointer
  int* p_number {}; // will initialize to nullptr
  double* p_fractional_number {};

  // With nullptr
  int* p_number1 {nullptr};
  double* p_fractional_number1 {nullptr};

  // Pointers to different variables are of the same size
  std::cout << "sizeof(int): " << sizeof(int) << std::endl;
  std::cout << "sizeof(double): " << sizeof(double) << '\n';
  std::cout << "sizeof(double*): " << sizeof(double*) << '\n';
  std::cout << "sizeof(int*): " << sizeof(int*) << '\n';
  std::cout << "sizeof(p_number1): " << sizeof(p_number1) << '\n';
  std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << '\n';
  
  // Justification of the * does not matter
  int*  p_number2{nullptr};
  int * p_number3{nullptr};
  int  *p_number4{nullptr};

  int *p_number5{}, other_int_var{};   // Confusing. The second var will NOT be a
  int* p_number6{}, other_int_var6{};  // pointer

  std::cout << "sizeof(p_number5): " << sizeof(p_number5) << std::endl;
  std::cout << "sizeof(other_int_var): " << sizeof(other_int_var) << std::endl;
  std::cout << "sizeof(p_number6): " << sizeof(p_number6) << std::endl;
  std::cout << "sizeof(other_int_var6): " << sizeof(other_int_var6) << std::endl;

  // It is better to separate these lines
  int *p_number7 {};
  int other_int_var7 {};
  */

  // Initializing pointers and assigning them data
  // Pointers store addresses of other variables

  int int_var {43};
  int *p_int{&int_var}; // The address operator &

  std::cout << "int var: " << int_var << '\n';
  std::cout << "p_int (int_var memory address): " << p_int << '\n';

  // You can change the address stored in a pointer
  int int_var1{65};
  p_int = &int_var1;
  std::cout << "p_int (with different address): " << p_int << '\n';

  // Can't cross-assign between pointers of different types
  int *p_int1{nullptr};
  double double_var{33};

  // p_int1 = double_var;  // Mismatched type -> compiler error

  // Dereferencing a pointer (reading the value from the underlying variable)
  int* p_int2{nullptr};
  int int_data {56};
  p_int2 = &int_data;

  std::cout << "value: " << *p_int2 << '\n';

  return 0;
}
