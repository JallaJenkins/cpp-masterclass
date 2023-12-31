#include <iostream>

double add(double a, double b){
  return a + b;
}

int main(){

  // Function pointer init options:
  // double (*f_ptr) (double, double) = &add;
  // double (*f_ptr) (double, double) = add;
  // double (*f_ptr) (double, double) {&add};
  // double (*f_ptr) (double, double) {add};
  // auto (*f_ptr) (double, double) {add};
  // auto f_ptr {&add};
  // auto f_ptr {add};
  // double f_ptr {add}; // Compiler error! Must use auto with simplified init
  // auto f_ptr = add;
  // double f_ptr = add; // Compiler error! Must use auto with simplified init
  // auto* f_ptr = &add;
  // auto* f_ptr = add;
  // auto* f_ptr {add};
  // auto* f_ptr {&add};

  // int(*f_ptr) (double, double) = add; // Compiler error; wrong return type

  double (*f_ptr) (double, double) = nullptr; // No compiler error but will cause runtime error if attempt to call the function pointer

  std::cout << "add(10, 30): " << f_ptr(10, 30) << '\n';

  return 0;
}
