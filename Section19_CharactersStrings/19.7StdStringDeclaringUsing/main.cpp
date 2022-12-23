#include <iostream>
#include <string>

int main(){

  std::string full_name;  // Empty string
  std::string planet {"Earth"};  // Init with string literal
  std::string prefered_planet {planet}; // Init with C++ string variable
  std::string message {"Hello there", 5};  // Init first 5 chars of string literal
  std::string weird_message {4,'e'};  // Init with 4 * 'e'
  std::string greeting {"Hello World"};
  std::string saying_hello {greeting, 6, 5}; // Init with 5 chars starting position 6
  
  std::cout << "full_name: " << full_name << '\n';
  std::cout << "planet: " << planet << '\n';
  std::cout << "prefered_planet: " << prefered_planet << '\n';
  std::cout << "message: " << message << '\n';
  std::cout << "weird_message: " << weird_message << '\n';
  std::cout << "greeting: " << greeting << '\n';
  std::cout << "saying_hello: " << saying_hello << '\n';

  // Changing std::string at runtime
  planet = "Earth Earth Earth";
  std::cout << "planet: " << planet << '\n';

  // Using a raw array
  // The code will work because the planet1 pointer will be moved to the new string
  // However the old string will remain in memory, so it is wasteful
  const char* planet1 {"Earth"};
  planet1 = "Earth Earth Earth";
  std::cout << "planet1: " << planet1 << '\n';

  // char planet2[] {"Earth"};
  // planet2 = "Earth Earth Earth";  // Compiler error

  return 0;
}
