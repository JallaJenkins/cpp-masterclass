#include <iostream>

bool is_palindrome(unsigned long long int num){
  bool result{};

  unsigned long long int num_temp{num};
  unsigned long long int num_reversed{0};

  while (num_temp > 0) {
    unsigned int last_digit {num_temp % 10};
    num_reversed = (num_reversed * 10) + last_digit;
    num_temp /= 10;
    // if (num_temp > 0) {
    //   num_reversed *= 10;
    // }
    
  }

  return (num == num_reversed);
}
  /*
  unsigned int num_digits{};

  // std::cout << "num_temp: " << num_temp << '\n';
    // std::cout << "num_reverse: " << num_reversed << '\n';
    // std::cout << "=================================\n";

  if (num < 10)
    result = true;
    return result;

  unsigned long long int num_temp{num};
  while (num_temp > 0) {
    num_digits++;
    num_temp /= 10;
  }

  if (num_digits % 2 == 0) {
    while (num > 0) {
      if 
    }
  }
  */
