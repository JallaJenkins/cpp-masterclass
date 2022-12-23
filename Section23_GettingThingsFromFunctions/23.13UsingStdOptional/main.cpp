#include <iostream>
#include <optional>
#include <string>

std::optional<size_t> find_character_v2(const std::string& str, char c) {
  // If found return index, else return nullopt
  for(size_t i{}; i < str.size(); ++i) {
    if(str.c_str()[i] == c) {
      return i;
    }
  }
  return {};  // Equivalent to std::nullopt
}

// Specifiy default character to search for
std::optional<size_t> find_character_v3(const std::string& str,
                                        std::optional<char> c = std::nullopt) {
  // If found set return index, else return empty
  // If c is specified, find it else find 'z'
  /*
  char char_to_find;
  if(c.has_value()) {
    char_to_find = c.value();
  } else {
    char_to_find = 'z';
  }
  */

  char char_to_find = c.value_or('z');

  for(size_t i{}; i < str.size(); ++i) {
    //std::cout << "str[i]: " << str.at(i) << " , c: " << c << '\n';
    if(str.c_str()[i] == char_to_find) {
      return i;
    }
  }
  return {};
}

int main(){

  std::string str1{"Hello World in C++20!"};
  char c{'C'};

  /*
  std::optional<size_t> result = find_character_v2(str1, c);

  if(result.has_value()) {
    std::cout << "Found our character at index: " << result.value() << '\n';
  } else {
    std::cout << "Character not found\n";
  }
  */

  /*
  auto result = find_character_v3(str1);  // Will search for z unless specified
  if(result.has_value()) {
    std::cout << "Found our character 'z' at index: " << result.value() << '\n';
  } else {
    std::cout << "Character 'z' not found\n";
  }
  */

  auto result = find_character_v3(str1, 'o');  // Will search for z unless specified
  if(result.has_value()) {
    std::cout << "Found our character 'o' at index: " << result.value() << '\n';
  } else {
    std::cout << "Character 'o' not found\n";
  }

  return 0;
}
