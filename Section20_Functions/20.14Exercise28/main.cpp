#include <iostream>

int contains_character( const char* str , unsigned int size , char c) {
  for (unsigned int i{0}; i < size; ++i) {
    if (str[i] == c) return i;
  }

  return -1;
}

void find_character(const char* str, unsigned int size, char c) {
  int char_pos {contains_character(str, size, c)};
  if (char_pos > -1) {
    std::cout << "Found character " << c << " at index " << char_pos;
  } else {
    std::cout << "Could not find the character " << c << " in " << str;
  }
}

int main(){

  char message[] {"Hello there"};
  find_character(message,sizeof(message)/sizeof(char),'o');
  find_character(message,sizeof(message)/sizeof(char),'P');
  return 0;
}
