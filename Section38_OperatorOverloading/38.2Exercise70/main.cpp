#include <iostream>
#include "exercise.h"

int main(){

  CU::Point_nD p1{1, 2, 3};
  CU::Point_nD p2{1, 2, 3};
  CU::Point_nD p3 = p1 + p2;

  p3.print();


  return 0;
}
