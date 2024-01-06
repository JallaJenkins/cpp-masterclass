#include <iostream>

class Printer{
  std::string m_color;
  
public:
  Printer(std::string color) : m_color(color) {}
  std::string operator()(std::string text){
    return "[color: " + m_color + ", message: " + text + "]";
  }
};

// std::ostream& Printer::operator<<(std::ostream& out, std::string text){

// }

int main(){

  // Printer red_printer("red");
  // auto result = red_printer("Hello");
  // std::cout << result  << std::endl;

  Printer red_printer("green");
  auto result = red_printer("The sky is blue my friend!");
  std::cout << result  << std::endl;

  return 0;
}
