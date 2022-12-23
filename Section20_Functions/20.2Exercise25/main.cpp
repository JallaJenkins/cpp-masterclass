#include <iostream>

unsigned int digit_sum(unsigned int num) {
  unsigned int result{};
  while (num > 0) {
    result += (num % 10);
    num /= 10;
  }
  return result;
}

int main(){

  unsigned int test_num{479};
  std::cout << "digit_sum(" << test_num << "): " << digit_sum(test_num) << '\n';

  return 0;
}
