#include <iostream>

int& max_return_reference(int& a, int& b)
  {
    if (a > b) {
      return a;
    } else {
      return b;
    }
  }

int& sum(int& a, int& b){
  int result = a + b;
  return result;  // Reference to local variable returned - compiler warning
}

int& max_input_by_value(int a, int b)
{
  if(a > b) return a;  // Reference to local variable returned
  else return b;  // Reference to local variable returned
}


int main(){
  /*
  int x{14};
  int y{9};
  int& ref_max = max_return_reference(x, y); // Returns reference to a variable
  int val = max_return_reference(x, y);  // Returns copy by value

  std::cout << "ref_max: " << ref_max << '\n';
  std::cout << "val: " << val << '\n';
  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';

  ref_max++;

  std::cout << "--------------------\n";
  std::cout << "ref_max: " << ref_max << '\n';  // 15
  std::cout << "val: " << val << '\n';  // 14
  std::cout << "x: " << x << '\n';  // 15
  std::cout << "y: " << y << '\n';  // 9
  */

  /*
  int x{14};
  int y{9};
  int& result = sum(x, y);
  std::cout << "result: " << result << '\n';
  
  */

  int x{14};
  int y{9};
  int& result = max_input_by_value(x, y);  // Reference to local variable
  std::cout << "result: " << result << '\n';

  std::cout << "Done\n";
  return 0;
}
