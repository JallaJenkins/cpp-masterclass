#include <iostream>
#include <string>

// Ambiguous calls
void say_my_name(std::string& name) {
  std::cout << "Your name is (ref): " << name << '\n';
}


void say_my_name(std::string name) {
  std::cout << "Your name is (non ref): " << name << '\n';
}

// Implicit conversion with references
double max(double a, double b) {
  std::cout << "double max called\n";
  return (a > b) ? a : b;
}

// int& max(int& a, int& b) {
const int& max(const int& a, const int& b) {
  std::cout << "int max called\n";
  return (a > b) ? a : b;
}

int main(){

  /*
  // std::string name{"John"};
  // say_my_name(name);  // Ambiguous - valid call to either function definition

  say_my_name("John");  // Still ambiguous  - the refernce call will create a temporary 
                        // ref variable to run
                        // However will not be ambiguous if ref parameter is not const b/c you cannot pass a literal value to a non-const ref parameter
  */

  char a{6};
  char b{9};

  // auto result = max(a, b);  // Char will be converted to double b/c implicit 
                            //conversions cannot be used with non-const reference parameters

  // We can convert to int using new variables
  int temp_a = a; // Could also use static_cast<int>
  int temp_b = b;

  // auto result = max(temp_a, temp_b);

  // Or could use const reference parameters in the function (see above) in which case the compiler will choose the int& function definition

  auto result = max(a, b);

  return 0;
}
