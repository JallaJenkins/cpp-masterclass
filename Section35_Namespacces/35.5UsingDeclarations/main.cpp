#include "point.h"
#include "line.h"
#include "cylinder.h"
#include "operations.h"

#include <iostream>

// using Geom::Point;
using namespace Geom;
// using Math::add;
using namespace Math;

double add(double a, double b){
  std::cout << "::add\n";
  return a + b + 0.555;
}

int main(){

  Point p1(10, 20);
  Point p2(3.4, 6.1);
  p1.print_info();
  p2.print_info();

  std::cout << "----------------\n";

  Line l1(p1, p2);
  l1.print_info();

  std::cout << "----------------\n";

  Cylinder c1(1.4, 10);
  std::cout << "c1.volume: " << c1.volume() << '\n';

  Math_Weighted::add(10, 20);

  std::cout << "----------------\n";


  
  return 0;
}
