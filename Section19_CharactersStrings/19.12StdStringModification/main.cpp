#include <iostream>
#include <string>

int main(){

  /*
  // Clear: Removes all characters from the string
  std::string str1 {"The Lion Dad"};
  str1.reserve(100);

  std::cout << "str1 is:" << str1 << '\n';
  std::cout << "str1 size:" << str1.size() << '\n';
  std::cout << "str1 capacity:" << str1.capacity() << '\n';

  str1.clear();
  std::cout << "str1 is:" << str1 << '\n';
  std::cout << "str1 size:" << str1.size() << '\n';
  std::cout << "str1 capacity:" << str1.capacity() << '\n';
  */

  /*
  // Insert (1)
  // basic_string& insert (size_t index, size_t count, char ch)
  // Inserts count characters in the string starting at index
  std::string str2 {"122"};
  std::cout << "str2: " << str2 << '\n';

  str2.insert(2, 3, '3');

  std::cout << '\n';
  std::cout << "str2: " << str2 << '\n';
  */

  /*
  // Insert (2)
  // basic_string& insert(size_t index, const chat* s)
  // Inserts null terminated character string pointed to by s at position index

  std::string str3 {"Hello"};
  const char* txt3 {" World!"};
  // char txt3[] {" World!"};  // Also works

  std::cout << "str3: " << str3 << '\n';  // Hello

  str3.insert(5, txt3);

  std::cout<< '\n';
  std::cout << "str3: " << str3 << '\n'; // Hello World!
  */

  /*
  // Insert(3)
  // basic_string& insert(size_t index. const char* s, size_t count)
  // Inserts the characters in the range [s, s+count) at position index
  // The range can contain null characters
  std::string str4 {"Hello"};
  const char* txt4 {" World Health Organization"};

  std::cout << "str4: " << str4 << '\n';

  str4.insert(5, txt4, 6);

  std::cout << "Inserting...\n";
  std::cout << "str4: " << str4 << '\n';
  */

  /*
  // Insert(4)
  // basic_string& insert(size_t index, const basic_string& str)
  // Insert string str at the position index

  std::string str5{" World"};
  std::string str6{"Hello!"};
  std::cout << "str6: " << str6 << '\n';
  str6.insert(5, str5);
  std::cout << "Inserting...\n";
  std::cout << "str6: " << str6 << '\n';
  */

  /*
  // Insert(5)
  // basic_string& insert(size_t index, const basic_string& str, size_t index_str, 
  //                      size_t count = npos)
  // Inserts str.substr(index_str, count) at position index

  std::string str7 {"Hello!"};
  std::string str8 {"Statistical Analysis of the World Population"};
  std::cout << "str7: " << str7 << '\n';
  str7.insert(5, str8, 27, 6);
  std::cout << "Inserting...\n";
  std::cout << "str7: " << str7 << '\n';
  */

  /*
  // Erase
  // basic_string erase(size_t index=0, size_t count=npos)
  // Starting at index, erase count charaxters from the string
  // Returns a reference
  std::string str9{"Hello World is a message used to start off things when learning programming!"};
  str9.erase(11, str9.size() - 12);
  std::cout << "str9: " << str9 << '\n';

  // Reset str9
  str9 = "Hello World is a message used to start off things when learning programming!";

  // Direct print out (works because erase method returns a reference)
  std::cout << "str9: " << str9.erase(11, str9.size() - 12) << '\n';
  */

  // push_back
  // void push_back (char ch)
  // Appends ch to end of string
  std::string str10 {"Hello World"};
  str10.push_back('!');
  std::cout << "str10: " << str10 << '\n';

  // pop_back
  // void pop_back()
  // Removes last character from the string
  std::string str11 {"Hello World!!"};
  str11.pop_back();
  std::cout << "str11: " << str11 << '\n';

  return 0;
}
 