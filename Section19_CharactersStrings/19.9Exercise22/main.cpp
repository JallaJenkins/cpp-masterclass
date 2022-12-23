#include <iostream>
#include <string>

int main(){

  const char* str1 {"Hello there!"};
  const char* str2 {"How are you?"};

  std::string result;

  result = str1 + std::string(" ") + str2;

  return 0;
}
