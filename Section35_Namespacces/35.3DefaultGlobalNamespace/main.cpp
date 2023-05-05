#include <iostream>

double add(double a, double b){
  return a + b;
}

namespace My_Thing {

  double add(double a, double b){
    return a + b - 1;
  }

  void do_something() {
    // double result = ::add(5, 6);  // Calls global namespace
    double result = add(5, 6);  // Calls closest namespace = My_Thing
    std::cout << " result: " << result << '\n';
  }

}

int main(){

  My_Thing::do_something();

  return 0;
}
