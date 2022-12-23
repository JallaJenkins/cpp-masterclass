#include <iostream>
#include "exercise.h"

int main(){

  long long int test_num{123321};

  std::cout << std::boolalpha;
  std::cout << "test_num is palindrome: " << is_palindrome(test_num) << '\n';


  return 0;
}
