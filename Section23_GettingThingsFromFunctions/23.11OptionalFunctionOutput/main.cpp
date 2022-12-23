 #include <iostream>
 #include <string>

int find_character_v0(const std::string& str, char c ) {
  // If founc, return the index, otherwise return -1
  int not_found {-1};
  for(size_t i; i < str.size(); ++i) {
    if(str.c_str()[i] == c) 
      return i;
  }
  return not_found;
}

void find_character_v1(const std::string& str, char c, bool& success){
  // If found set success to true, otherwise set to false
  for(size_t i{}; i < str.size(); ++i){
    if(str[i] == c) {
      success = true;
      return;
    }
  }
  success = false;
}

int main(){
  
  std::string str1{"Hello World in C++20!"};
  char c{'C'};

  /*
  int index = find_character_v0(str1, c);

  // std::cout << "index: " << index << '\n';

  if(index != -1){
    std::cout << "Found character at index: " << index << '\n';
  } else {
    std::cout << "Character not found" << '\n';
  }
  */

  bool success{false};
  find_character_v1(str1, c, success);
  std::cout << std::boolalpha;
  // std::cout << "success: " << success << '\n';

  if(success) {
    std::cout << "Found character '"  << c << "' in our string" << '\n';
  } else {
    std::cout << "Character not found" << '\n';
  }

  return 0;
}

