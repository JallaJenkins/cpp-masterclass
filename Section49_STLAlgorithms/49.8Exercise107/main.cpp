#include <iostream>
#include "exercise.h"

int main(){

  // MovableStack stack;
  // stack.push(1);
  // stack.push(2);
  // stack.push(3);
  
  // std::cout << stack.pop() << std::endl;// Prints 3
  // std::cout << stack.pop() << std::endl;// Prints 2
  // std::cout << stack.pop() << std::endl;// Prints 1
  // std::cout << stack.empty() << std::endl;// Prints 1 (true)

  // MovableStack stack;
  // stack.push(1);
  // stack.push(2);
  // stack.push(3);

  // std::cout << stack.top() << std::endl;// Prints 3
  // stack.pop();

  // std::cout << stack.top() << std::endl;// Prints 2
  // stack.pop();

  // std::cout << stack.top() << std::endl;// Prints 1
  // stack.pop();

  // stack.top();// Throws exception

  // MovableStack stack;
  //   std::cout << stack.getSize() << std::endl;// Prints 0
 
  //   stack.push(1);
  //   stack.push(2);
  //   stack.push(3);
  //   std::cout<< stack.getSize() << std::endl;// Prints 3
 
  //   stack.pop();
  //   std::cout << stack.getSize() << std::endl;// Prints 2
 
  //   stack.pop();
  //   std::cout << stack.getSize() << std::endl;// Prints 1

  MovableStack stack1;
  stack1.push(1);
  stack1.push(2);
  stack1.push(3);

  MovableStack stack2(stack1);
  std::cout << stack2.pop() << std::endl;// Prints 3
  std::cout << stack2.pop() << std::endl;// Prints 2
  std::cout << stack2.pop() << std::endl;// Prints 1
  std::cout << stack2.empty() << std::endl;// Prints 1 (true)

  MovableStack stack3;
  stack3 = stack1;
  std::cout << stack3.pop() << std::endl;// Prints 3
  std::cout << stack3.pop() << std::endl;// Prints 2
  std::cout << stack3.pop() << std::endl;// Prints 1
  std::cout << stack3.empty() << std::endl;// Prints 1 (true)

  return 0;
}
