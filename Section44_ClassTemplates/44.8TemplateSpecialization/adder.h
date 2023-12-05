// #ifndef ADDER_H
// #define ADDER_H

#include <iostream>
#include <cstring>

// Regular class template
template <typename T>
class Adder
{
public:
  Adder(){
  }
  T add(T x, T y);
  void do_something(){
    std::cout << "Doing something...\n";
  }
};

template <typename T>
T Adder<T>::add(T a, T b){
  return a + b;
}

// Template specialization
template<>
class Adder<char*>
{
public:
  Adder(){
  }
  char* add(char* a, char* b);
};

inline char* Adder<char*>::add(char* a, char*b){
  return strcat(a, b);
}

// #endif // ADDER_H