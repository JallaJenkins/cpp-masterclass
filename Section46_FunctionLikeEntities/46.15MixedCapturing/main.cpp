#include <iostream>

int main(){

  int a{10};
  int b{11};
  int c{12};
  int d{13};

  // Code1: Mix by value and by ref
  auto func1 = [a, &b] (int x, int y){

  };

  // Code2: All by value, a by reference
  auto func2 = [=, &a] (int x, int y){

  };

  // Code 3: All by reference, a by value
  auto func3 = [&, a] (int x, int y){

  };

  // Code 4: capture all = and & must always come first
  /*
  auto func4 = [a, b, &] (int x, int y){  // Compiler error

  };

  auto func5 = [a, b, =] (int x, int y){  // Compiler error

  };
  */

  // Code5: Can't prefex vars with =
  // auto func6 = [=a, =b] (int x, int y){  // Compiler error

  // };

  // Code6: Can't capture specific vars after capture all
  // auto func7 = [=, &b, c] (int x, int y){ // Compiler error

  // };

  // auto func3 = [&, a, &c] (int x, int y){ // Compiler error

  // };
  

  return 0;
}
