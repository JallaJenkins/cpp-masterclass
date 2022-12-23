#include <iostream>
#include <string>

int main(){

  /*
  // Find(1)
  // std::string::find()
  // size_t find (const basic_string& str, size_t pos=0) const
  // Finds the starting index where the str substring is found in the string on which 
  // the method was called

  std::string string1 {"Water was poured in the heater"};
  std::string search_for {"ter"};

  size_t found_pos = string1.find(search_for);
  std::cout << "find('ter): index [" << found_pos << "]\n";

  // find red
  search_for = "red";
  found_pos = string1.find(search_for);
  std::cout << "find('red'): index [" << found_pos << "]\n";

  // Find something that isn't there
  search_for = "chicken";
  found_pos = string1.find(search_for);
  std::cout << "find(chicken): index[" << found_pos << "]\n";

  //std::string::npos
  std::cout << "npos: " << std::string::npos << '\n';

  size_t large = -1;
  std::cout << "large: " << large << '\n';
  */

  /*
  // Using std::string::npos to check if search was successful or failed

  std::string string1 {"Water was poured in the heater"};
  std::string search_for {"red"};

  size_t found_pos = string1.find(search_for);
  if(found_pos == std::string::npos) {
    std::cout << "Could not find the string 'red'\n";
  } else {
    std::cout << "'red' found starting at position: " << found_pos << '\n';
  }

  search_for = "chicken";
  found_pos = string1.find(search_for);
  if(found_pos == std::string::npos) {
    std::cout << "Could not find the string 'chicken'\n";
  } else {
    std::cout << "'chicken' found starting at position: " << found_pos << '\n';
  }
  */

  /*
  // Find(2)
  // Can specify the position where we want the search to start from using the 
  // second method parameter

  std::string string1 {"Water was poured in the heater"};
  std::string search_for {"ter"};

  size_t found_pos = string1.find(search_for);
  std::cout << "find('ter): index [" << found_pos << "]\n";

  found_pos = string1.find(search_for, 0);
  std::cout << "find('ter): index [" << found_pos << "]\n";

  found_pos = string1.find(search_for, found_pos + 1);
  std::cout << "find('ter): index [" << found_pos << "]\n";

  found_pos = string1.find(search_for, 28);  // Will find npos
  std::cout << "find('ter): index [" << found_pos << "]\n";
  */

  //Find(3)
  // size_t find(const char* s, size_t pos=0) const
  // Use C-string as search term

  std::string string2 {"beer is packaged by her in beer cans around here."};
  const char* c_string2{"her"};

  size_t found_pos = string2.find(c_string2, 2);
  if (found_pos != std::string::npos) {
    std::cout << c_string2 << " found at position: " << found_pos << '\n';
  } else {
    std::cout << "Could not find the string: " << c_string2 << '\n';
  }

  return 0;
}
