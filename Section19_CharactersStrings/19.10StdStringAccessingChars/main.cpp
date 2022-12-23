#include <iostream>
#include <string>

int main(){

  /*
  std::string str1 {"Hello there"};

  // Size of a string. Does not count the null terminator
  std::cout << "str1.size(): " << str1.size() << '\n';
  std::cout << "str1.length(): " << str1.length() << '\n';

  // Reading characters in std::string: array index operator
  std::cout << '\n';
  std::cout << "For loop with array index notation:\n";;
  std::cout << "str1 for loop:";
  for (size_t i{}; i < str1.size(); ++i) {
    std::cout << " " << str1[i];
  }
  std::cout << '\n';
  */

  /*
  std::string str1 {"Hello there"};
  std::cout << '\n';
  std::cout << "Using range based for loop:\n";
  std::cout << "str1 range-based for loop: ";
  for (char value: str1) {
    std::cout << " " << value;
  }
  */

  /*
  // at() syntax
  std::cout << '\n';
  std::cout << "Using std::string.at():\n";

  std::string str1 {"Hello there"};
  std::cout << "str1: for loop with .at(): ";
  for (size_t i{}; i < str1.size(); ++i) {
    std::cout << " " << str1.at(i);
  }
  std::cout << '\n';
  */

  /*
  // Modifying with operator[] and at()
  std::string str1 {"Hello there"};
  str1[0] = 'B';
  str1.at(1) = 'a';
  std::cout << "str1(modified): " << str1 << '\n';
  */

  /*
  // Getting the front and back characters
  std::string str2{"The Phoenix King"};
  char& front_char = str2.front();  // use references if you want to modify
  char& back_char = str2.back();  // raw variables will change target if you reassign
  std::cout << "front_char: " << front_char << '\n';
  std::cout << "back_char: " << back_char << '\n';\
  
  front_char = 'r';
  back_char = 'd';

  std::cout << "str2: " << str2 << '\n';
  */

  /*
  // .c_str method - accesses underlying c-string directly
  // Returns const char* to the wrapped string
  // Don't use to modify data in the string
  std::string str2 {"The Phoenix King"};
  const char* wrapped_c_string = str2.c_str();
  std::cout << "Wrapped c string: " << wrapped_c_string << '\n';

  // wrapped_c_string[0] = 'e';  // Compiler error
  */

  // .data() method
  std::string str2 {"Hello World"};
  char* data = str2.data();
  std::cout << "Wrapped c string: " << data << '\n';

  data[0] = 'B'; // This will work; also changes +string
  std::cout << "Wrapped c string (after modification): " << data << '\n';
  std::cout << "Original +string (after modification): " << str2 << '\n';

  return 0;
}
