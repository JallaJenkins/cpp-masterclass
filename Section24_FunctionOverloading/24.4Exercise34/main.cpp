#include <iostream>
#include <string>
#include <cstring>

double add(double a, double b) {
  return a + b;
}


std::string add( std::string& a,std::string& b) {
  return a + b;
}

const char* add( char* a, const char* b) {
  return strcat(a, b);
}

int main(){

  char name[20] {"The sky"};
  auto result_str  = add (name," is blue");
  std::cout << "result_str : " <<  result_str;

  return 0;
}
