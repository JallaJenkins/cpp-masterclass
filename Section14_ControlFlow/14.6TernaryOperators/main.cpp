#include <iostream>

int main(){

  int max{};

  int a{35};
  int b{200};

  std::cout << "\n";
  std::cout << "using regular if \n";

  /*
  if(a > b){
    max = a;
  } else {
    max = b;
  }
  */

  auto max1 = (a > b) ? a : 22.5f;
  std::cout << "max: " << max1 << "\n";


  return 0;
}
