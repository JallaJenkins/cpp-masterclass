#include <iostream>

int main(){

  int condition{0};

  int my_var{4};

  switch (int data{7}; condition)
  {
    // int x{9}; // Never going to run
    int x;
    case 0:
      // int y{5};
      int y;
      x = 6;
      x++;
      // z = 6;
      std::cout << "x: " << x << "\n";
      std::cout << "Statement1\n";
      std::cout << "Statement2\n";
      break;
    
    case 1:
      my_var++;
      int z;
      y = 5;
      std::cout << "y: " << y << "\n";
      std::cout << "Statement3\n";
      std::cout << "Statement4\n";
      break;

    default:
      int u;
      z = 10;
      std::cout << "Statement5\n";
      std::cout << "Statement6\n";
      break;
  }
  std::cout << "Moving on...\n";

  return 0;
}
