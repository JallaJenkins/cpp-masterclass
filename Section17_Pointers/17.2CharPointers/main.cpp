#include <iostream>

int main(){

  const char *message {"Hello World!"};

  std::cout << "message: " << message << '\n';

  // *message = "B"; // Compiler error - can't modify constant

  std::cout << "*message: " << *message << '\n';

  // Allow users to modify the string
  char message1[] {"Hello World!"};
  message1[0] = 'B';
  std::cout << "message1: " << message1 << '\n';

  return 0;
}
