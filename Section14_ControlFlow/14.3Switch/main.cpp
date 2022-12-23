#include <iostream>
#include <string>

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main(){
  int tool {Circle};

  switch (tool)
  {
    case Pen: {
      std::cout << "Active tool is Pen\n";
    }
    break;
  
    case Marker: {
      std::cout << "Active tool is Marker\n";
    }
    break;

    case Eraser: {
      std::cout << "Active tool is Eraser\n";
    }
    break;

    case Rectangle:
    case Circle: 
    case Ellipse: {
      std::cout << "Drawing shapes\n";
    }
    break;

    default:
      std::cout << "No match found\n";
    break;
  }

  std::cout << "Moving on" << std::endl;

    /*
    // Condition can only be integer of enum (We'll learn about enums later in the course)
    std::string name {"John"};
    switch (name) // Compiler error!
    {
    
    }
    */
  
  // std::string name {"John"};

  // switch(name)
  // {

  // }

  return 0;
}
