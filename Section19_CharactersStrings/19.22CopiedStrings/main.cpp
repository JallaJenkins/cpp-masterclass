#include <iostream>
#include <string>

int main(){

  std::string message {"Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello world!"};
  // std::string message_copy {message};  // Creates a copy of the C-string and makes a new +string wrapper
  std::string& message_copy {message};  // Reference points to original copy of data

  std::string message1 {"New message"};
  message_copy = message1;

  char* p1 = message.data();
  char* p2 {message_copy.data()};

  // std::cout << "&message[0]: " << p1 << '\n';  // Prints C-string, not address
  // std::cout << "&message_copy[0]: " << p2 << '\n';

  std::cout << "&message[0]: " << (void*) p1 << '\n';
  std::cout << "&message_copy[0]: " << (void*) p2 << '\n';

  return 0;
}
