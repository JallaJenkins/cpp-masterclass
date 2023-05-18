#include <iostream>

namespace{

  double add(double a, double b);

}

int main(){

  double result = add(10.2, 20.2);
  std::cout << "result: " << result << '\n';

  return 0;
}

namespace{

  double add(double a, double b){
    return a + b;
  }

}
