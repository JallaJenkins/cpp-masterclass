#include <iostream>
#include <string>

int main(){

  /*
  // Concatenating strings: The + operator
  std::cout << '\n';
  std::cout << "Concatenating two strings:\n";

  std::string str1{"Hello"};
  std::string str2{"World"};

  std::string message = str1 + " my " + str2;

  std::cout << "message: " << message << '\n';
  */

  /*
  // Concatenating string literals leads to compiler error
  // The + operator will not work with arrays
  std::cout << '\n';
  std::cout << "Concatenating string literals: Compiler error!\n";

  // std::string str3 {"Hello" + "World"};  // Compiler error
  // std::string str4 = "Hello" + "World";  // Compiler error
  */

  /*
  // A few ways to manage string literal concatenation
  std::cout << '\n';
  std::cout << "A few ways to manage string literal concatenation\n";

  std::string str5 {"Hello World"};  // combine in one literal
  std::string str6 {"Hello" " World"};  // leave a space
  std::string str7 {std::string{"Hello"} + " World"};  // convert one to +str

  std::cout << "str5: " << str5 << '\n';
  std::cout << "str6: " << str6 << '\n';
  std::cout << "str7: " << str7 << '\n';

  using namespace std::string_literals;  // allows "s" suffix but pollutes namespace
  std::string str8 {"Hello"s + " World"};  // makes "Hello" a +str
  std::cout << "str8: " << str8 << '\n';

  // A better way that doesn't pollute the namespace
  std::string str9;
  {
    using namespace std::string_literals;  // only affects namespace in this code block
    str9 = "Hello"s + " World";
  }

  std::cout << "str9: " << str9 << '\n';
  */

  /*
  // std:string is a compound type, meaning it has extra functionality
  // We can access its methods with the . operator
  std::cout << '\n';
  std::cout << "Using the append method:\n";
  std::string str10 {"Hello"};
  std::string str11 {" World"};
  std::string str12 = str10.append(str11);
  std::cout << "str12: " << str12 << '\n';

  std::string str13{std::string{"Hello"}.append(" World")};
  std::cout << "str13: " << str13 << '\n';
  */

  // Append can do more than the + operator
  /*
  std::cout << '\n';
  std::cout << "Append can do more than the + operator\n";
  std::string str14{"Hello"};
  std::string str15 {str14.append(5, '?')};  // Appends 5 '?' characters
  std::cout << "str15: " << str15 << '\n';

  std::string str16 {"The world is our shared home."};
  std::string str17 {"Hello "};
  std::string str18{str17.append(str16, 4, 5)}; // Append 5 chars of str16 starting at index 4
  std::cout << "str16: " << str16 << '\n';
  std::cout << "str17: " << str17 << '\n';
  std::cout << "str18: " << str18 << '\n';

  // Direct output
  std::string str19 {"Hello "};
  std::cout << "Direct output: " << str19.append(str16, 4, 5) << '\n';
  */

  /*
  // Concatenating strings and characters
  std::cout << '\n';
  std::cout << "Concatenating strings and characters\n";
  std::string str20 {"Hello"};
  std::string str21 {"World"};
  std::string str22 {str20 + ' ' + str21};
  std::cout << "str22: " << str22 << '\n';

  std::string str23 = "Hello";
  // str23 += ',' + ' ';  // compiler adds the ascii codes and then concats
                          // Order of operations applies
  (str23 += ',') + ' ';  // This will do what we want
  std::cout << "str23: " << str23 << '\n';

  std::string str24 = "Hello";
  std::string str25 {"I am here to see you"};
  std::string str26 {str24 + ',' + ' ' + str25}; // Works because of order of operations
  std::cout << "str26: " << str26 << '\n';
  */

  /*
  // Appending Cstrings and char arrays
  std::cout << '\n';
  std::cout << "Appending C-Strings and char arrays\n";
  const char message1[] {"World"};
  const char* message2 {"World"};

  std::cout << " + char array: " << std::string("Hello ") + message1 << '\n';
  std::cout << " + C-string: " << std::string("Hello ") + message2 << '\n';
  std::cout << "append char array: " << std::string("Hello ").append(message1) << '\n';
  std::cout << "append C-string: " << std::string("Hello ").append(message2) << '\n';
  */

  // Concatenating std::strings and numbers

  std::string str26{"Hello"};
  // str26 += 67;  // Treats 67 as a character code
  str26 += std::to_string(67.5);  // Converts number to string
  std::cout << "str26: " << str26 << '\n';

  return 0;
}
