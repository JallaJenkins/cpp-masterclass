#include <iostream>

int max(int, int);  // Function declaration/prototype 
int min(int, int);
int inc_mult(int, int);

int main(){

  int x{5};
  int y{12};

  int result = min(x, y);
  std::cout << "min: " << result << '\n';

  result = inc_mult(x, y);
  std::cout << "result: " << result << '\n';

  return 0;
}

int max(int a, int b) {   // Definition can go after main function becasue we declared 
  if (a>b)                // it before main.
    return a;
  else
    return b;
}

int min(int a, int b){
  if (a < b)
    return a;
  else 
    return b;
}

int inc_mult(int a, int b){
  return ((++a) * (++b));
}