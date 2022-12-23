#include <iostream>

int main(){

  /*
  const char* students [] {
    "Daniel Gray",
    "Tuna Philbe",
    "The Rock",
    "Kumar Singh",
    "Sam Ali",
    "Dave Mahoro"
  };
  */

 const char* const students [] {
    "Daniel Gray",
    "Tuna Philbe",
    "The Rock",
    "Kumar Singh",
    "Sam Ali",
    "Dave Mahoro"
  };

  // Print out the students
  std::cout << '\n';
  std::cout << "Printing out the students:\n";
  for (const char * student: students) {
    std::cout << student << '\n';
  }

  // *students[0] = 'K';  // Compiler error - trying to change a const char array

  // Can swap entire array
  const char* new_student {"Bob the Great"};
  students[0] = new_student; // Compiler error if we make students const char* const

  // Print out the students
  std::cout << '\n';
  std::cout << "Printing out the students:\n";
  for (const char * student: students) {
    std::cout << student << '\n';
  }

  return 0;
}
