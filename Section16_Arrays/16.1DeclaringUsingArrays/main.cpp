#include <iostream>

int main(){

  /*
  // Declare an array of ints
  int scores[10];

  //Read data
  std::cout << "scores[0]: " << scores[0] << '\n';
  std::cout << "scores[2]: " << scores[2] << '\n';
  */

  // Read w/ loop
  /*
  for(size_t i{0}; i < 10; ++i){
    std::cout << "scores[" << i << "]: " << scores[i] << '\n';
  }
  */
  /*
  // Write data into an array
  scores[0] = 20;
  scores[1] = 21;
  scores[2] = 22;

  // Print data
  
  for(size_t i{0}; i < 10; ++i){
    std::cout << "scores[" << i << "]: " << scores[i] << '\n';
  }
  */

  /*
  // Store data
  for(size_t i{0}; i < 10; ++i){
    scores[i] = i * 10;
  }

  // Print data
  for(size_t i{0}; i < 10; ++i){
    std::cout << "scores[" << i << "]: " << scores[i] << '\n';
  }
  */

  /*
  // Declare and initialize
  double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
  for(size_t i{0}; i < 5; ++i){
    std::cout << "salary[" << i << "]: " << salaries[i] << '\n';
  }
  */

  /*
  // If you do a partial initialization, the unspecified elements will be initialized
  // to 0
  int families[5] {12, 7, 5};
  for(size_t i{0}; i < 5; ++i){
    std::cout << "families[" << i << "]: " << families[i] << '\n';
  }
  */

  /*
  // Size can be infered if array is initialized on declaration
  // int class_sizes[]; // gives error
  int class_sizes[] {10, 12, 15, 11, 18, 17, 23, 56};
  for(auto value: class_sizes){
    std::cout << "value: " << value << '\n';
  }
  */

  /*
  // Read only arrays
  const int birds[] {10, 12, 15, 11, 18, 17, 23, 56};
  birds[2] = 8;  // Gives compiler error
  */

  // Data operations from array
  int scores[] {2, 5, 8, 2, 5, 6, 9};
  int sum{0};

  for (int element: scores){
    sum += element;
  }

  std::cout << "Scores sum: " << sum << '\n';

  return 0;
}
