#include <iostream>
#include "point.h"


int main(){

  Point p1{10, 20};
  Point p2{21.8, 40.6};

  p1.print_info();
  p2.print_info();

  return 0;
}
