#include <iostream>

double add(double a, double b){
  return a + b;
}

int main(){

  int x{5};   // Variables x, y, z are lvalues
  int y{10};  // Literals 5, 10, and 20 are rvalues
  int z{20};

  int* ptr = &x;  // Compiles fine b/c x is an Lvalue

  z = (x + y);  // Compiler directs system to store "x + y" in temp location as 
                // an rvalue. Once assigned to z, it becomes an lvalue

  std::cout << "z: " << z << '\n';
  // std::cout << "&(x + y): " << &(x + y) << '\n';  // Compiler error b/c x+y is rvalue

  std::cout << "------------------------------\n";

  double result = add(10.1, 20.2);  // add(10.1, 20.2) evaluates to rvalue, result is copied to variable as lvalue

  std::cout << "result is: " << result << '\n';
  // std::cout << "address of add(10.1, 20.2): " << &(add(10.1, 20.2)) << '\n';  // error b/c & requires lvalue as operand

  std::cout << "------------------------------\n";

  // Grab the addresses for later use

  // int* ptr1 = &(x + y); // Compiler error
  // int* ptr2 = &(add(10.1, 20.2)); // Compiler error
  // int* ptr3 = &45;  // Compiler error
  int* ptr4 = &x; // Works because variables represent lvalues

  return 0;
}
