#include <iostream>

int main(){

  /*
  int* p_number {new int{67}}; // Points to a heap address

  // Should delete and reset here

  int number {55};  // Stack variable
  p_number = &number;   // Now p_number points to a different address
                        // We have lost access to the original heap address

  */

  /*
  // Double allocation
  int* p_number1 {new int{55}};

  // Use pointer
  // Should delete and reset

  p_number1 = new int{44};  // Memory for int{55} above now leaked
  delete p_number1;         // Will only realy int{44} location. int{55} still leaked
  */

  // Nested scopes with dynamically allocated memory
  {
    int* p_number2 {new int{57}};

    //Use dynamic memory
    // Should delete before end of code block 
  }
  // Lost access to p_number2; memory now leaked

  // delete p_number2;  // Compiler error

  std::cout << "Reached program end\n";  
  return 0;
}
