#include <iostream>
#include <string>

int main(){

  /*
  // Replacing (1)
  // basic_string& replace(size_t pos, size_t count, const basic_string& str)
  // Replace the range [pos, pos + count] with str

  std::string str1 {"Finding Nemo"};  // Replace 'Finding' with 'Searching for'
  std::string str1_2 {"Searching For"};
  std::cout << str1 << '\n';

  std::cout << "Replacing...\n";
  str1.replace(0, 7, str1_2);
  std::cout << str1 << '\n';
  */

  /*
  // Replacing (2)
  // basic_string& replace(size_t pos, size_t count, const basic_string& str, 
  //                      size_t pos3, size_t count2 = npos)
  // Replace in part of str, not its entirety
  std::string str2 {"Finding Nemo"};
  std::string str3 {"The Horse was Found in the Fields Searching For Food"};
  std::cout << "str2: " << str2 << '\n';
  std::cout << "Replacing...\n";
  str2.replace(0, 7, str3, 34, 13);
  std::cout << "str2: " << str2 << '\n';
  */

  /*
  // Copying
  // size_t copy(char* dest, size_t count, size_t pos=0)
  // Copy a subsection of *this string to dest; dest is pre-allocated
  // WARNING: The resulting character string is not null terminated
  std::string str4 {"Climbing Kilimanjaro"};
  char txt4[15]{};  // Initialized with '\0 in each position
  std::cout << "std::size(txt4): " << std::size(txt4) << '\n';
  std::cout << "txt4: " << txt4 << '\n';

  std::cout << "Copying...\n";
  str4.copy(txt4, 11, 9);  // Won't work if txt4 is const

  // Safe to print because txt4 was initialized with all '\0's so we know it is null-terminated
  std::cout << "txt4: " << txt4 << '\n';
  */

  /*
  // Resizing
  // std::resize()
  std::string str5 {"Hello"};

  std::cout << "null char: " << '\0' << '\n';
  std::cout << "str5: " << str5 << '\n';
  std::cout << "str5.size(): " << str5.size() << '\n';
  std::cout << "str5.capacity(): " << str5.capacity() << '\n';

  std::cout << "Resizing...\n";
  str5.resize(8);  // Fills new character place holders with '\0' by default
  std::cout << "str5: " << str5 << '\n';
  std::cout << "str5.size(): " << str5.size() << '\n';
  std::cout << "str5.capacity(): " << str5.capacity() << '\n';

  // Directly printing all characters
  std::cout << "Printing through loop:\n";
  for (size_t i{}; i < str5.size(); ++i) {
    std::cout << i << ": " << str5[i] << '\n';
  }

  // Resize and specifiy autofill character
  std::cout << "Resize and specify autofill character:\n";
  str5.resize(10, '*');

  std::cout << "str5: " << str5 << '\n';
  std::cout << "str5.size(): " << str5.size() << '\n';
  std::cout << "str5.capacity(): " << str5.capacity() << '\n';

  // Resize down
  std::cout << "Resize down:\n";
  str5.resize(5);

  std::cout << "str5: " << str5 << '\n';
  std::cout << "str5.size(): " << str5.size() << '\n';
  std::cout << "str5.capacity(): " << str5.capacity() << '\n';
  */

  // Swapping strings
  std::string str_a{"This is a string stored in A"};
  std::string str_b{"This is a string stored in B and it's really great to be able to do that."};
    
  //Before swap
  std::cout << "str_a : " << str_a << std::endl;
  std::cout << "str_b : " << str_b << std::endl;
	std::cout << "str_a.size() :" << str_a.size() << std::endl;
	std::cout << "str_a.capaity() : " << str_a.capacity() << std::endl;
	std::cout << "str_b.size() :" << str_b.size() << std::endl;
	std::cout << "str_b.capaity() : " << str_b.capacity() << std::endl;
    
	std::cout << "Swapping..." << std::endl;
  str_a.swap(str_b);
    
  //After swap
  std::cout << "str_a : " << str_a << std::endl;
  std::cout << "str_b : " << str_b << std::endl;
	std::cout << "str_a.size() :" << str_a.size() << std::endl;
	std::cout << "str_a.capaity() : " << str_a.capacity() << std::endl;
	std::cout << "str_b.size() :" << str_b.size() << std::endl;
	std::cout << "str_b.capaity() : " << str_b.capacity() << std::endl;


  return 0;
}
