#include <iostream>
#include <string>

int main(){

  /*
  // Compare(1)
  // int compare (const basic_string& str) const noexcept1; (1)
  // Compare this string to str
  std::string str1{"Hello"};
  std::string str2{"Worlds"};

  std::cout << "str1: " << str1 << '\n';
  std::cout << "str2: " << str2 << '\n';
  std::cout << "str1.compare(str2): " << str1.compare(str2) << '\n';  // -1
  std::cout << "str2.compare(str1): " << str2.compare(str1) << '\n';  // 1
  */

  /*
  // Compare(2)
  // int compare(size_t pos1, size_t count1, const basic_string& str) const; (2)
  // Compares a substring of this string (from pos1, going count1 positions) to str
  std::string str1 = "Hello";
  std::string str3{"Hello World"};
  std::cout << "Comparing 'World' to 'Hello': " << str3.compare(6, 5, str1) << '\n';
  */

  // Compare(3)
  // int compare (const char* s) const; (4)
  // Compares this string to the null-terminated character sequence (C-string) 
  // beginning at the character pointed to by s

  std::string str5{"Hello"};
  const char* message {"World"};
  std::cout << "Comparing Hello to World (array): " << str5.compare(message) << '\n';
  std::cout << "Comparing Hello to World (sl): " << str5.compare("World") << '\n';


  return 0;
}
