#include "person.h"
#include <iostream>

// Variables:

// Declaration and definition
double weight{8.7};

// double weight; // Also a declration and definition!
////////////////////////////////////////


// Functions:

// Declaration and definition
/*
double add(double a, double b) {
  return a + b;
}
*/

// Declaraion only
double add(double a, double b);
///////////////////////////////////////////


// Classes:

// Declaration and definition
struct Point{
  double m_X;
  double m_y;
};




int main(){

  // std::cout << "weight: " << weight << '\n';
  // double result = add(10, 20.5);
  // std::cout << "result: " << result << '\n';

  Person p1("John Snow", 27);
  p1.print_info();

  return 0;
}

/*
// Definition only:
double add(double a, double b) {
  return a + b;
}
*/
