#include <iostream>

int main(){

  int number1{75};
  int number2{60};

  bool result = (number1 < number2);

  /*
  std::cout << std::boolalpha << "result: " << result << "\n";

  std::cout << "\n";
  std::cout << "free standing if statement" << "\n";

  if (result == true){
    std::cout << number1 << " is less than " << number2 << "\n";
  }

  if (!(result == true)){
    std::cout << number1 << " is not less than " << number2 << "\n";
  }
  */

  /*
  std::cout << "\n";
  std::cout << "using the else clause: \n";

  if (result == true){
    std::cout << number1 << " is less than " << number2 << "\n";
  } else {
    std::cout << number1 << " is not less than " << number2 << "\n";
  }
  */

  /*
  std::cout << "\n";
  std::cout << "using expression as condition: \n";

  if (number1 < number2){
    std::cout << number1 << " is less than " << number2 << "\n";
  } else {
    std::cout << number1 << " is not less than " << number2 << "\n";
  }
  */
  
  std::cout << "Nesting if statements:\n";

  bool red {false};
  bool yellow {false};
  bool green {true};
  bool police_stop {true};

  /*
  if(red){
    std::cout << "Stop\n";
  }
  if(yellow){
    std::cout << "Slow down\n";
  }
  if(green){
    std::cout << "Go\n";
  }
  */
  /*
  std::cout << "Police officer stops(verbose)\n";
  if(green){
    if(police_stop){
      std::cout << "Stop! Police!\n";
    }else{
      std::cout << "Go\n";
    }
  }
  */

  std::cout << "Police officer stops(verbose)\n";
    if(green){
      if(green && police_stop){
        std::cout << "Stop! Police!\n";
      }else{
        std::cout << "Go\n";
      }
    }

  std::cout << "\n";

  return 0;
}
