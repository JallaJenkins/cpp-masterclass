#include <iostream>
#include <string>
#include <cstring>

int main(){

  std::string hello_str {"Hello"};
  std::string bello_str {"Bello"};
  std::cout << std::boolalpha;

  /*
  // Using the comparison operators
  std::cout << '\n';
  std::cout << "Comparing with comparison operators:\n";

  std::cout << hello_str << " == " << bello_str << ": " << (hello_str == bello_str) << "\n";
  std::cout << hello_str << " != " << bello_str << ": " << (hello_str != bello_str) << "\n";
  std::cout << hello_str << " > " << bello_str << ": " << (hello_str > bello_str) << "\n";
  std::cout << hello_str << " >= " << bello_str << ": " << (hello_str >= bello_str) << "\n";
  std::cout << hello_str << " < " << bello_str << ": " << (hello_str < bello_str) << "\n";
  std::cout << hello_str << " <= " << bello_str << ": " << (hello_str <= bello_str) << "\n";
  */

  /*
  // Can even compare +strings and C-strings
  const char* c_string1 {"hello"};

  std::cout << "hello_str.size(): " << hello_str.size() << '\n';
  std::cout << "std::strlen(c_string1): " << std::strlen(c_string1) << '\n';
  std::cout << hello_str << " == " << c_string1 << " (C-string): " << (hello_str == c_string1) << '\n';
  std::cout << c_string1 << " (C-string) == " << hello_str << ": " << (c_string1 == hello_str) << '\n';
  std::cout << c_string1 << " (C-string) >= " << hello_str << ": " << (c_string1 >= hello_str) << '\n';
  std::cout << c_string1 << " (C-string) <= " << hello_str << ": " << (c_string1 <= hello_str) << '\n';
  */

  // Be careful about char arrays not terminated with null character
  std::cout << '\n';
  std::cout << "Comparing with non null terminated char array:\n";

  // const char hello_char_array[] {'H', 'e', 'l', 'l', 'o'};
    // The compiler will add to the string until it gets a null character

  // const char hello_char_array[] {'H', 'e', 'l', 'l', 'o', '\0'};  
    // This one will == hello_str

  const char* hello_char_array {"Hello"};  // Also works

  std::cout << "hello_char_array: " << hello_char_array << '\n';
  std::cout << hello_str << " == hello_char_array: " << (hello_str == hello_char_array) << '\n';



  return 0;
}
