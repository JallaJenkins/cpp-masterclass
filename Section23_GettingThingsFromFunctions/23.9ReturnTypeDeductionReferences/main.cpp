#include <iostream>

/*
auto max(int& a, int& b) {  // Will return values, not refernces
    if (a > b) {
      return a;
    } else {
      return b;
    }
  }

int main(){

  int x{10};
  int y{45};

  // int& result = max(x, y); // Compiler error: Cannot treat return value as a 
                              // reference
                              // Just a bare seperate variable containing returned value

  int result = max(x, y);   // A copy of the max value is returned

  ++result;

  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';
  std::cout << "result: " << result << '\n';

  return 0;
}
*/

auto& max(int& a, int& b) {  // Will return values, not refernces
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main(){

  int x{10};
  int y{45};

  int& result = max(x, y); // This will now return a reference

  // int result = max(x, y);   // A copy of the max value is STILL returned

  ++result;

  std::cout << "x: " << x << '\n';
  std::cout << "y: " << y << '\n';
  std::cout << "result: " << result << '\n';

  return 0;
}