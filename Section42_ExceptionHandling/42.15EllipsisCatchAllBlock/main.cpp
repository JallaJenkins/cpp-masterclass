#include <iostream>
#include "exceptions.h"

void some_function(size_t i) {
  if(i==0)
    throw 1;
  if(i==2)
    throw "const char*-Hello there";
  if(i==3)
    throw CriticalError("Something is wrong");
  if(i==4)
    throw std::string("std::string-Hello there");
}


int main(){

  try{
    for(size_t i{}; i < 5; ++i) {
      try{
        some_function(i);
      }
      catch(int x){
        std::cout << "int handler - Caught an int!\n";
      }
      catch(...){
        std::cout << "Inner handler, caught some exception\n";
        throw;
      }
    }
  }
  catch(std::string& ex){
    std::cout << "Caught some string exception\n";
  }
  catch(...){
    std::cout << "Outer handler caught some othe exception\n";
  }

  return 0;
}
