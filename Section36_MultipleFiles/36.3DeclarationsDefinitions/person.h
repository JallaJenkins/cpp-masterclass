#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{
public:
  // Constructor Declaration
  Person(const std::string& names_param, int age_param);

  void print_info() const {
    std::cout << "name: " << full_name << ", age: " << age << '\n';
  }

private:
  std::string full_name;
  int age;

public:
  // static variable declaration only! Need defn or there will be a linker error
  static int person_count;
};



#endif // PERSON_H