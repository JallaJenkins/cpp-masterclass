#include <iostream>
#include "parent.h"
#include "child.h"

int main(){

  // Parent p1;
  // p1.print_var();

  Child c1;
  // c1.show_values();
  c1.Parent::print_var();
  

  return 0;
}
