#include <iostream>
#include "person.h"

// Variable: Declaration & Definition
double weight{};
// double weight{}; // Compiler error

double add(double a, double b);

struct Point{
  double m_x{};
  double m_y{};
};

// struct Point{ //  Compiler error
//   double m_x;
//   double m_y;
// };

// Person::Person(const std::string& names_param, int age_param)  // Linker error
//   : full_name{names_param}, age{age_param}
//   {
//     ++person_count;
//   }

// int Person::person_count{8};  // Linker error

int main(){

  // double result = add(10, 20);
  // std::cout << "result: " << result << '\n';

  // Point p1;

  // std::cout << "p1.x: " << p1.m_x;
  // std::cout << ", p1.y: " << p1.m_y << '\n';

  Person p1("John Snow", 35);
  p1.print_info();

  return 0;
}

// double add(double a, double b){
//   return a + b;
// }

// double add(double a, double b){  // Compiler error
//   return a + b;
// }