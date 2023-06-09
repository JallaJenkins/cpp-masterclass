#include "utility.h"
#include <iostream>

inline int age{12};

inline void some_age_function(){
  std::cout << "age: " << age << '\n';
  std::cout << "&age: " << &age << '\n';
}

void print_age_1(){
  std::cout << "ageutility1):\n";
  some_age_function();
}


static double distance {23.9};

static void some_distance_function() {
  std::cout << "distance: " << distance << '\n';
  std::cout << "&distance: " << &distance << '\n';
}


/*
namespace {
  double distance {23.9};

  void some_distance_function() {
    std::cout << "distance: " << distance << '\n';
    std::cout << "&distance: " << &distance << '\n';
  }
}
*/

void print_distance_1() {
  std::cout << "distance(utility1):\n";
  some_distance_function();
}