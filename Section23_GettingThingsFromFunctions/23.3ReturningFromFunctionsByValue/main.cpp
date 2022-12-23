#include <iostream>
#include <string>

int sum (int a, int b) {
  int result = a + b;
  std::cout << "In: &result(int): " << &result << '\n';
  return result;
}

std::string add_strings(std::string str1, std::string str2) {
  std::string result = str1 + str2;
  std::cout << "In: &result(string): " << &result << '\n';
  return result;
}

int main(){

  /*
  int x{5};
  int y{9};
  int result = sum(x, y);
  // Returned by value as a copy: different address inside vs outside the function
  std::cout << "Out: &result(int): " << &result << '\n';
  */

  std::string in_str1{"Hello"};
  std::string in_str2{" World!"};
  std::string result_str = add_strings(in_str1, in_str2);
  std::cout << "Out: &result_str(std::string): " << &result_str << '\n';
  std::cout << "result_str: " << result_str << '\n';

  return 0;
}
