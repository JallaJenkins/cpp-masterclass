#include <iostream>
#include <cstring>

int main(){

  // Concatenation

  /*
  std::cout << '\n';
  std::cout << "std::strcat:\n";

  char dest[50] = "Hello ";
  char src[50] = "World!";
  std::strcat(dest, src);  // Some compilers won't accept these functions
  std::cout << "dest: " << dest << '\n';
  std::strcat(dest, " Goodbye World!");
  std::cout << "dest: " << dest << '\n';
  */

  /*
  std::cout << '\n';
  std::cout << "More std::strcat:\n";

  char* dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
  char* source1 = new char[30]{',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};

  std::cout << "std::strlen(dest1): " << strlen(dest1) << '\n';
  std::cout << "std::strlen(source1): " << strlen(source1) << '\n';

  // std::cout << "Concatenating..." << '\n';
  // std::strcat(dest1, source1);
  
  std::cout << "std::strlen(dest1): " << strlen(dest1) << '\n';
  std::cout << "dest1: " << strcat(dest1, source1) << '\n';
  */

  /*
  // std::strncat - Concatenating with specified number of characters
  // Returns a pointer to the result string
  // signature: char *strncat(char *dest, const car *src, std::size_t count)

  std::cout << '\n';
  std::cout << "std::strncat:\n";
  char dest2[50] {"Hello"};
  char source2[30] {" There is a bird on my window"};

  // You can use the returned pointer immediately for printout
  // This is a commonly used pattern
  std::cout << strncat(dest2, source2, 6) << '\n';

  // Or you can separate the concat from the print
  strncat(dest2, source2, 6);
  std::cout << "The concatenated string is: " << dest2 << '\n';
  */

  /*
  // std::strcpy - Copy a string
  // signature: char* strcpy(char* dest, const char* src)
  std::cout << '\n';
  std::cout << "std:strcpy:\n";
  const char* source3 {"C++ is a multipurpose programming language."};
  char* dest3 = new char[strlen(source3) + 1];  // +1 for null character

  strcpy(dest3, source3);
  std::cout << "sizeof(dest3): " << sizeof(dest3) << '\n';
  std::cout << "strlen(dest3): " << strlen(dest3) << '\n';
  std::cout << "dest3: " << dest3 << '\n';
  */

  // std::strncpy - Copy first n characters from a string
  // signature: char *strcpy (char *dest, const char *src, size_t count)
  std::cout << '\n';
  std::cout << "std::strncpy:\n" << '\n';
  const char* source4 = "Hello";
  char dest4[] {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
  
  std::cout << "dest4: " << dest4 << '\n';
  std::cout << "Copying...\n";
  strncpy(dest4, source4, 3);
  std::cout << "dest4: " << dest4 << '\n';

  return 0;
}
