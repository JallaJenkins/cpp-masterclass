#include <iostream>

void show_odds(unsigned long long num) {
  unsigned long long result{};

  while (num > 0) {
    if ((num % 10) % 2 == 1) {
      result *= 10;
      result += num % 10;
    }
    num /= 10;
  }

  std::cout << result;

}

int main(){

  show_odds(98723713);

  return 0;
}
