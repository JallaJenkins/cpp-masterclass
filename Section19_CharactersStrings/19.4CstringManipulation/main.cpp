#include <iostream>
#include <cstring>

int main(){

  /*
  // std::strlen : Find the length of a string
  // Applies to both arrays and array pointers
  const char message1 [] {"The sky is blue."};

  // Array decays into pointer when we use const char*
  const char* message2 {"The sky is blue."};

  // strlen ignores the ending null character
  std::cout << "strlen(message1): " << std::strlen(message1) << '\n';

  // sizeof includes the ending null character
  std::cout << "sizeof(message1): " << sizeof(message1) << '\n';
  
  // strlen still works with decayed arrays
  std::cout << "strlen(message2): " << std::strlen(message2) << '\n';

  // sizeof prints size of pointer
  std::cout << "sizeof(message2): " << sizeof(message2) << '\n';
  */

  /*
  // std::strcmp 
  // Compares two strings and returns int based on lexicographical order in char type
  // Function signature: int strcmp(const char *lhs, const char *rhs)
  
  
  std::cout << '\n';
  std::cout << "std::strcmp:\n";
  const char* string_data1 {"Clabama"};
  const char* string_data2 {"Blabama"};

  char string_data3[] {"Alabama"};
  char string_data4[] {"Xlabama"};
  
  // Print out the comparison
  std::cout << "std::strcmp (" << string_data1 << ", " << string_data2 << "): ";
  std::cout << std::strcmp(string_data1, string_data2) << '\n';
  std::cout << "std::strcmp (" << string_data3 << ", " << string_data4 << "): ";
  std::cout << std::strcmp(string_data3, string_data4) << '\n';

  string_data1 = "Alabamg";
  string_data2 = "Alabamb";

  // string_data3 = "Alabamba"; // Compiler error! Cannot reassign an array variable.

  std::cout << "std::strcmp (" << string_data1 << ", " << string_data2 << "): ";
  std::cout << std::strcmp(string_data1, string_data2) << '\n';
  */

  // std::strcmp 
  // Compares first n characters in strings and returns int based on lexicographical 
  // order in char type
  // Function sigature: int stncmp(const char *lhs, const char *rhs, size_t count)
  
  /*
  const char* string_data1 {"Alabama"};
  const char* string_data2 {"Blabama"};
  size_t n{3};
  std::cout << '\n';
  std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ", "  << n << "): ";
  std::cout << strncmp(string_data1, string_data2, n) << '\n';

  string_data1 = "aaaia";
  string_data2 = "aaance";

  std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ", "  << n << "): ";
  std::cout << std::strncmp(string_data1, string_data2, n) << '\n';

  n = 5;

  std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ", "  << n << "): ";
  std::cout << std::strncmp(string_data1, string_data2, n) << '\n';

  string_data1 = "aaaoa";
  string_data2 = "aaance";

  std::cout << "std::strncmp (" << string_data1 << ", " << string_data2 << ", "  << n << "): ";
  std::cout << std::strncmp(string_data1, string_data2, n) << '\n';
  */

  
  // Find the first occurance of a character

  std::cout << '\n';
  std::cout << "std::strchr:\n";

  // Using std::strchr to fine each character in a string sequentially
  const char str[] {"Try not. Do, or do not. There is no try."};
  char target {'T'};
  const char* result = {str};
  size_t iterations {};

  // while ((result = std::strchr(result, target)) != nullptr) {
  //   std::cout << "Found '" << target << "' starting at '" << result << '\n';
  //   ++result;
  //   ++iterations;
  // }

  while (result != nullptr) {
    std::cout << "Found '" << target << "' starting at '" << result << '\n';
    ++result;
    ++iterations;
    result = strchr(result, target);
  }

  std::cout << "iterations: " << iterations << '\n';
  

  /*
  const char* str {"Try not. Do, or do not. There is no try."};
  char target {'T'};
  const char* result = {nullptr};
  size_t iterations {};

  while ((str = std::strchr(str, target)) != nullptr) {
    std::cout << "Found '" << target << "' starting at '" << str << '\n';
    ++str;
    ++iterations;
  }

  std::cout << "iterations: " << iterations << '\n';
  */
  
  // Find last occurance
  std::cout << '\n';
  std::cout << "std:strrchr:\n";

  char input[] {"/home/user/hello.cpp"};
  char* output = strrchr(input, '/');
  if (output) {
    std::cout << output + 1 << '\n';  // Print rest of string starting after last '/'
  }


  return 0;
}
