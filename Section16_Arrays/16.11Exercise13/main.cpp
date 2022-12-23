#include <iostream>

void common_elements(int array_1[], int array_2[]){
   // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10
   
  //Don't modify anything above this line
  //Your code will go below this line

  size_t number_of_common_elements{0};
  int common_elements[10]{0};

  for (size_t i{0}; i < 10; ++i ) {

    // Check to see if element is already in common_elements
    bool already_added{false};
    for (size_t k{0}; k < 10; ++k) {
      if (common_elements[k] == array_1[i]) {
        already_added = true;
        break;
      }
    }
    if(already_added) {
        continue;
    }
    // If not already added, check for match and add
    for (size_t j{0}; j < 10; ++j){
      if (array_1[i] == array_2[j]){
        common_elements[number_of_common_elements] = array_1[i];
        ++number_of_common_elements;
        break;
      }
    }
  }
  // Print message

  if (number_of_common_elements == 0) {
    std::cout << "There are 0 common elements";
  } else {
    std::cout << "There are " << number_of_common_elements << " common elements they are : ";
    
    for (size_t i{0}; i < number_of_common_elements; ++i) {
      std::cout << common_elements[i] << " ";
    }
  }

}
  //Your code will go above this line
  //Don't modify anything after this line



int main() {
  int data1[] {1,2,4,5,9,3,6,7,44,55}; 
  int data2[] {11,2,44,45,49,43,46,47,55,88};

  common_elements(data1, data2);

  return 0;

}
