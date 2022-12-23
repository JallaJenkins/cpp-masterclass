#include <iostream>
#include <string>

int main(){
  /*
  std::string str1 {"Hello World"};
  std::string str2;
  std::string str3 {};

  // Empty
  std::cout << '\n';
  std::cout << "std::string::empty():\n";
  std::cout << "Is str1 empty? " << std::boolalpha << str1.empty() << '\n';
  std::cout << "Is str2 empty? " << std::boolalpha << str2.empty() << '\n';
  std::cout << "Is str3 empty? " << std::boolalpha << str3.empty() << '\n';

  // Size
  std::cout << '\n';
  std::cout << "std::string::size():\n";
  std::cout << "str1 size: " << str1.size() << '\n';
  std::cout << "str2 size: " << str2.size() << '\n';
  std::cout << "str3 size: " << str3.size() << '\n';

  // Length
  std::cout << '\n';
  std::cout << "std::string::length():\n";
  std::cout << "str1 length: " << str1.length() << '\n';
  std::cout << "str2 length: " << str2.length() << '\n';
  std::cout << "str3 length: " << str3.length() << '\n';
  */

  /*
  // max_size() - Returns max number of characters for +string on system
  // Should be same as max array size
  std::string str1{"Hello World"};
  std::cout << "std:string can hold " << str1.max_size() << " characters\n";
  */

  /*
  // Capacity
  std::string str1 {"Hello World"};
  std::string str2;
  std::cout << "str1 capacity: " << str1.capacity() << '\n';
  std::cout << "str2 capacity: " << str2.capacity() << '\n';

  str1 = "The sky is so blue, the grass is so green. Kids are running all over the place";

  std::cout << "str1 size: " << str1.size() << '\n';
  std::cout << "str1 capacity: " << str1.capacity() << '\n';
  */

  /*
  // Reserve: Update the capacity
  std::string str1 {"Hello World"};
  std::cout << "str1 capacity: " << str1.capacity() << '\n';
  std::cout << "str1 size: " << str1.size() << '\n';

  str1.reserve(100);

  std::cout << "str1 after reserve: " << str1 << '\n';
  std::cout << "str1 capacity: " << str1.capacity() << '\n';
  std::cout << "str1 size: " << str1.size() << '\n';
  */

  // .shrink_to_fit()
  std::string str1 {"Hello World"};
  str1.reserve(100);

  std::cout << "str1 capacity: " << str1.capacity() << '\n';
  std::cout << "str1 size: " << str1.size() << '\n';

  str1.shrink_to_fit();

  std::cout << "str1 capacity: " << str1.capacity() << '\n';
  std::cout << "str1 size: " << str1.size() << '\n';

  return 0;
}
