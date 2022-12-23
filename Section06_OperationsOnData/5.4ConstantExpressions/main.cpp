#include <iostream>

int main(){

  constexpr int SOME_LIB_MAJOR_VERSION {123};
  constexpr int eye_count {2};
  constexpr double PI {3.14};

  // eye_count = 3;

  std::cout << "eye count: " << eye_count << std::endl;
  std::cout << "PI: " << PI << std::endl;

  // const int leg_count {2};

  // constexpr int arm_count{leg_count};

  static_assert( SOME_LIB_MAJOR_VERSION == 123);

  int age = 5;
  static_assert(age == 5);

  std::cout << "App works!" << std::endl;

  return 0;
}
