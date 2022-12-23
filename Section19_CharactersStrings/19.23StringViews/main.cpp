#include <iostream>
#include <string>
#include <string_view>
#include <cstring>

int main(){

  /*
  std::string string {"Hello"};  // String lteral and string are two different copies
  std::string string1 {string};  // Another copy
  std::string string2 {string};  // Another copy

  std::cout << "address of string: " << &string << '\n';
  std::cout << "address of string1: " << &string1 << '\n';
  std::cout << "address of string2: " << &string2 << '\n';
  */

  /*
  // Using string view
  std::string_view sv {"Helloooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"};
  std::string_view sv1 {sv};
  std::string_view sv2 {sv1};

  std::cout << "Size of std::string: " << sizeof(std::string) << '\n';
  std::cout << "Size of sv: " << sizeof(sv) << '\n';
  std::cout << "Size of string view: " << sizeof(std::string_view) << '\n';
  std::cout << "Size of sv1: " << sizeof(sv1) << '\n';

  std::cout << "sv: " << sv << '\n';
  std::cout << "sv1: " << sv1 << '\n';
  std::cout << "sv2: " << sv2 << '\n';
  */

  /*
  // Constructing string views
  std::string string3 {"Regular std::string"};
  const char* c_string {"Regular c_string"};
  const char char_array[] {"Char array"};
  char char_array2[] {'H', 'u', 'g', 'e'};  // non-null terminated

  std::string_view sv3 {"String literal"};
  std::string_view sv4 {string3};
  std::string_view sv5 {c_string};
  std::string_view sv6 {char_array};
  std::string_view sv7 {sv3};
  // std::string_view sv8 {char_array2};  // Won't end in the right place!
  std::string_view sv8 {char_array2, std::size(char_array2)};  // need size if no null char

  std::cout << "sv3: " << sv3 << '\n';
  std::cout << "sv4: " << sv4 << '\n';
  std::cout << "sv5: " << sv5 << '\n';
  std::cout << "sv6: " << sv6 << '\n';
  std::cout << "sv7: " << sv7 << '\n';
  std::cout << "sv8: " << sv8 << '\n';
  */

  /*
  // Changes to the original string are reflected in the string view
  char word[] {"Dog"};
  std::string_view sv9 {word};

  std::cout << "word: " << word << '\n';

  std::cout << "Changing data...\n";
  word[2] = 't';

  std::cout << "word: " << word << '\n';
  */

  /*
  // Changing the view window
  const char* c_string1 {" The animals have left the region"};
  std::string_view sv10{c_string1};

  std::cout << "sv10: " << sv10 << '\n';
  sv10.remove_prefix(4);  // Removes "the"
  
  std::cout << "sv10 with remove_prefix(4): " << sv10 << '\n';
  std::cout << "original string: " << c_string1 << '\n';

  sv10.remove_suffix(10); // Removes "the region"
  std::cout << "sv10 with remove_suffix(10): " << sv10 << '\n';
  std::cout << "original string: " << c_string1 << '\n';
  */

  /*
  // String view should not have greater duration that the underlying string
  std::string_view sv11;

  {
    std::string string4{"Hello there"};
    sv11 = string4;
    std::cout << "sv11 is viewing: " << sv11 << '\n';
  }
  std::cout << "sv11 is viewing: " << sv11 << '\n';  // Undefined behaviour - underlying string is no longer valid
  */

  /*
  // data
  std::string_view sv13 {"Ticket"};
  std::cout << "sv13: " << sv13 << '\n';
  std::cout << "std::strlen(sv13.data(): " << std::strlen(sv13.data()) << '\n';
  */

  /*
  // Don't use data() on a modified view
  std::string_view sv14 {"Ticket"};
  sv14.remove_prefix(2);
  sv14.remove_suffix(2);

  // Length info is lost when you modify the view
  std::cout << sv14 << " has " << std::strlen(sv14.data()) << "character(s)" << '\n';
  std::cout << "sv14.data() is " << sv14.data() << '\n';
  std::cout << "sv14 is " << sv14 << '\n';
  */

  /*
  // Don't view non-null terminated strings
  char char_array3[] {'H', 'e', 'l', 'l', 'o'};
  std::string_view sv15 {char_array3, std::size(char_array3)};

  std::cout << sv15 << " has " << std::strlen(sv15.data()) << " character(s)" << '\n';
  std::cout << "sv15.data() is: " << sv15.data() << '\n';
  std::cout << "sv15 is: " << sv15 << '\n';
  */

  // std::string behaviours
  std::string_view sv16 {"There is a huge forest in that area"};
  std::cout << "sv16 is " << sv16.length() << " characters long" << '\n';
  std::cout << "The front character is: " << sv16.front() << '\n';
  std::cout << "The back character is: " << sv16.back() << '\n';
  std::cout << "Substring: " << sv16.substr(3, 22) << '\n';

  return 0;
}
