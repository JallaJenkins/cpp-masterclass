#include <iostream>

// Function that takes single argument and doesn't return any value
void enter_bar(unsigned int age) {
  if (age > 18) {
    std::cout << "You're " << age << " years old. Please proceed.\n";
  } else {
    std::cout << "Sorry, you're too young for this. No offence!\n";
  }
  return;  // Optional
}

// Function that takes arguments and returns a value
int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

// Function that take no arguments and returns nothing
void say_hello() {
  std::cout << "Hello there\n" ;
  // return;  // Optional
}

// Function that take no arguments and returns a value
int lucky_number() {
  return 99;
}

// Parameters passed this way are scoped locally in the function
// Changes to them are not visible outside the function
// What we have inside the function are actually copies.

double increment_multiply(double a, double b) {
  std::cout << "Inside function, before increment:\n";
  std::cout << "a: " << a << '\n';
  std::cout << "b: " << b << '\n';

  double result = ((++a) * (++b));

  std::cout << "Inside function, after increment:\n";
  std::cout << "a: " << a << '\n';
  std::cout << "b: " << b << '\n';

  return result;
}

int main(){

  // enter_bar(22);
  // enter_bar(15);

  // for (size_t i{1}; i < 20; ++i) {
  //   enter_bar(i);
  // }

  /*
  int x{22};
  int y{44};
  int result = max(100, 20);
  result = max(x, y);
  std::cout << "max: " << result << '\n';
  */

  // say_hello();

  /*
  int result {};
  result = lucky_number();
  std::cout << "result: " << result << '\n';
  */

  double h{3.00};
  double i{4.00};

  std::cout << "Ouside function, before increment:\n";
  std::cout << "h: " << h << '\n';
  std::cout << "i: " << i << '\n';

  double incr_mult_result {increment_multiply(h, i)};

  std::cout << "Ouside function, after increment:\n";
  std::cout << "h: " << h << '\n';
  std::cout << "i: " << i << '\n';

  return 0;
}
