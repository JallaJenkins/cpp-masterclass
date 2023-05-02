#include "outer.h"
#include <iostream>

int main(){

  // Inner inner{5.6};  // Compiler error - Inner not in global scope
  // Outer::Inner inner1{5.6}; // Compiler error if Inner is in private section of
  //                           //  Outer
  // inner1.get_double();

  Outer outer1(5, 20.1);
  outer1.do_something();

  return 0;
}
