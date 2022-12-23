#include <iostream>

int main(){

  char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d', '\0'};
  unsigned int size {std::size(message)};

  int vowel_count {0};

  for (size_t i{0}; i < size; ++i) {
    switch (message[i]){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        ++vowel_count;
        break;
      
      default:
        break;
    }
  }

  std::cout << "The string : " << message << " has " << vowel_count << " vowels";

  return 0;
}
