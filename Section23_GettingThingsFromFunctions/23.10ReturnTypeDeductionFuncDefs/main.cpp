#include <iostream>

auto max(int& a, int& b){  // Will return a copy
  if(a > b) return a;
  else return b;
} 

int main(){

  int x{5};
  int y{9};
  int int_ref = max(x, y);
  
  return 0;
}

