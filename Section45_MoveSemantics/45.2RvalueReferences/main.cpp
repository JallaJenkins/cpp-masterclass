#include <iostream>

double add(double a, double b){
  return a + b;
}

int main(){

  int x(5);
  int y(10);

  int&& result = x + y;
  double&& outcome = add(10.1, 20.2);

  // result = 20;

  std::cout << "result: " << result << '\n';
  std::cout << "outcome: " << outcome << '\n';

  return 0;
}
