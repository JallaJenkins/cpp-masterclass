#include <iostream>
#include <string>
#include <limits>

int main(){

  // std::string m1{"Hello"};
  // std::string m2{"World"};

  /*
  auto result = m1.compare(m2);
  if (result > 0) {
    std::cout << "m1 > m2\n";
  } else if (result == 0) {
    std::cout << "m1 == m2\n";
  } else {
    std::cout << "m1 < m2\n";
  }
  */

  /*
  // Three way comparison operator "spaceship operator:":
  int n1{5};
  int n2{5};
  //int n3{0};

  auto result = (n1 <=> n2);

  std::cout << std::boolalpha;
  std::cout << "n1 > n2 : " << (result > 0) << std::endl; // true
  std::cout << "n1 >= n2 : "<< ((n1 <=> n2) >= 0) << std::endl;
  std::cout << "n1 == n2 : " << ((n1 <=> n2) == 0) << std::endl;
  std::cout << "n1 < n2 : " << ((n1 <=> n2) < 0) << std::endl;
  std::cout << "n1 <= n2 : " << ((n1 <=> n2) <= 0) << std::endl;
  */

  /*
  // Strong ordering
  int n4{5};
  int n5{5};

  std::cout << std::boolalpha;
  std::cout << "n4 > n5: " << (n4 > n5) << '\n';
  std::cout << "n4 == n5: " << (n4 == n5) << '\n';
  std::cout << "n4 < n5: " << (n4 < n5) << '\n';
  */

  /*
  // Weak ordering
  std::string m1{"Hello"};
  std::string m2{"HELLO"};

  std::cout << std::boolalpha;
  std::cout << "m1 > m2: " << (m1 > m2) << '\n';
  std::cout << "m1 == m2: " << (m1 == m2) << '\n';
  std::cout << "m1 < m2: " << (m1 < m2) << '\n';
  */

  // Partial ordering
  double d1{33.9};
  double d2{std::numeric_limits<double>::quiet_NaN()}; // type of NaN

  std::cout << std::boolalpha;
  std::cout << "d1 > d2 : " << (d1 > d2) << std::endl; // false
  std::cout << "d1 == d2 : " << (d1 == d2) << std::endl; //false
  std::cout << "d1 < d2 : " << (d1 < d2) << std::endl; //false

  return 0;
}
