#include <iostream>

int main(){

  /*
  // Declare array
  char message [6] {'H', 'e', 'l', 'l', 'o', '\0'};

  
  // Print with looping
  std::cout << "message: ";
  for(auto c: message) {
    std::cout << c;
  }

  std::cout << '\n';

  // Change characters in array
  message[1] = 'a';

  std::cout << "message: ";
  for(auto c: message) {
    std::cout << c;
  }
  */

  /*
  // This will give garbage at the end of the string
  char message [6] {'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "message: " << message << '\n';
  */

  char message1 [] {'H', 'e', 'l', 'l', 'o', '\0'};
  std::cout << "message1: " << message1 << '\n';
  std::cout << "sizeof(message1): " << sizeof(message1) << '\n';

  char message2 [6] {'H', 'e', 'l', 'l', 'o'};
  std::cout << "message2: " << message2 << '\n';
  std::cout << "sizeof(message2): " << sizeof(message2) << '\n';

  char message3 [] {'H', 'e', 'l', 'l', 'o'};
  std::cout << "message3: " << message3 << '\n';
  std::cout << "sizeof(message3): " << sizeof(message3) << '\n';

  // String literals
  char message4 [] {"Hello world, how are you doing?"};
  std::cout << "message4: " << message4 << '\n';
  std::cout << "sizeof(message4): " << sizeof(message4) << '\n';

  // Non-char arrays don't print properly
  int numbers[] {1, 2, 3, 4, 5};
  std::cout << numbers << '\n';

  return 0;
}
