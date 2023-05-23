#include "person.h"

// double weight{}; //  Linker error!

// double add(double a, double b){ //   Linker error
//   return a + b;
// }

// class Person{  // Compiler error b/c Person class definition in in same translation unit

// };

double add(double a, double b){
  return a + b;
}

struct Point{
  double m_x;
  double m_y;
};

Person::Person(const std::string& names_param, int age_param)
  : full_name{names_param}, age{age_param}
  {
    ++person_count;
  }

int Person::person_count{8};