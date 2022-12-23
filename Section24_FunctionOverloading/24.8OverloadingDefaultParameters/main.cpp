#include <iostream>

void print_age(int age = 33);
void print_age(long int age);

int main(){

  print_age();

  return 0;
}

void print_age(int age) {
  std::cout << "Your age is (int): " << age << '\n';
}

void print_age(long int age) {
  std::cout << "Your age is (long int): " << age << '\n';
}
