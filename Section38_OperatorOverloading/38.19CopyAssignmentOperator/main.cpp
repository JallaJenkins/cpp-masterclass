#include <iostream>
#include "point.h"

int main(){

  
  Point p1(10, 10, 10);
  Point p2(20, 20, 20);
  Point p77(3, 3, 3);

  std::cout << "p1: " << p1 << '\n';
  std::cout << "p2: " << p2 << '\n';

  std::cout << "-----------------------------------\n";

  // Assignment
  // Using default assignment operator makes shallow memberwise copy
  // p2 = p1;

  p1 = p2 = p77; // Can do chained assignments b/c return by refernce
                  // Evaluated right to left, all will = p77
  // p1.operator=(p2.operator=(p77));  // <- Shows logic explicitly
  // p1.operator=(p2).operator=(p77);  // <- Don't do this; will leave p2 alone
  
  std::cout << "p1: " << p1 << '\n';
  std::cout << "p2: " << p2 << '\n';
  std::cout << "p77: " << p77 << '\n';
  
  // Change data

  p1.set_data(55);

  std::cout << "-----------------------------------\n";
  std::cout << "p1: " << p1 << '\n';
  std::cout << "p2: " << p2 << '\n';
  

  /*
  Point p3(30, 30, 30);
  // Point p4(p3);
  Point p4 = p3;

  std::cout << "p3: " << p3 << '\n';
  std::cout << "p4: " << p4 << '\n';

  p3.set_data(77);
  std::cout << "-----------------------------------\n";
  std::cout << "p3: " << p3 << '\n';
  std::cout << "p4: " << p4 << '\n';
  */
  
  return 0;
}
