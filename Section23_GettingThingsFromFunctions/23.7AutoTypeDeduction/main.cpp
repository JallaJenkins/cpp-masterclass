#include <iostream>

int main(){

  /*
  // Type deduction with auto: just a copy
  double some_var{55.5};
  auto x = some_var;

  std::cout << "sizeof(some_var): " << sizeof(some_var) << '\n';
  std::cout << "sizeof(x): " << sizeof(x) << '\n';
  std::cout << "&some_var: " << &some_var << '\n';
  std::cout << "&x: " << &x << '\n';
  std::cout << "some_var: " << some_var << '\n';
  std::cout << "x: " << x << '\n';
  */

  /*
  std::cout << "Type deduction with references - case 1:\n";
  double some_var = 55.5;  // double

  double& some_var_ref {some_var};
  auto y = some_var_ref;  // creates new double var y
  ++y;

  std::cout << "sizeof(some_var): " << sizeof(some_var) << '\n';
  std::cout << "sizeof(some_var_ref): " << sizeof(some_var_ref) << '\n';
  std::cout << "sizeof(y): " << sizeof(y) << '\n';
  std::cout << "&some_var: " << &some_var << '\n';
  std::cout << "&some_var_ref: " << &some_var_ref << '\n';
  std::cout << "&y: " << &y << '\n';
  std::cout << "some_var: " << some_var << '\n';
  std::cout << "some_var_ref: " << some_var_ref << '\n';
  std::cout << "y: " << y << '\n';
  */

  /*
  std::cout << "Type deduction with references - case 2:\n";
  double some_var = 55.5;  // double
  double& some_var_ref {some_var};
  auto& z = some_var_ref;  // creates new reference to double var z
  ++z;

  std::cout << "sizeof(some_var): " << sizeof(some_var) << '\n';
  std::cout << "sizeof(some_var_ref): " << sizeof(some_var_ref) << '\n';
  std::cout << "sizeof(z): " << sizeof(z) << '\n';
  std::cout << "&some_var: " << &some_var << '\n';
  std::cout << "&some_var_ref: " << &some_var_ref << '\n';
  std::cout << "&z: " << &z << '\n';
  std::cout << "some_var: " << some_var << '\n';
  std::cout << "some_var_ref: " << some_var_ref << '\n';
  std::cout << "z: " << z << '\n';
  */

  /*
  // Constness is preserved with properly deduced references
  const double some_other_var {44.3};
  const double& const_ref {some_other_var};
  auto& p = const_ref;

  std::cout << "some_other_var: " << some_other_var << '\n';
  std::cout << "const_ref: " << const_ref << '\n';
  std::cout << "p: " << p << '\n';

  ++p; // compiler error - auto& deduces that the reference is const

  std::cout << "some_other_var: " << some_other_var << '\n';
  std::cout << "const_ref: " << const_ref << '\n';
  std::cout << "p: " << p << '\n';
  */

  // Constness doesn't matter with non-reference deduction
  const double i_am_const {72.2};
  const double& my_ref {i_am_const};

  auto q = my_ref;  // q is a seperate, non-const variable; not a reference
  ++q; // no error b/c q can be modified; original variable not modified


  return 0;
}
