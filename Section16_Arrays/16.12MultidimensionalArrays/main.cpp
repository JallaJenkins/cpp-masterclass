#include <iostream>

int main(){

  // 2D array
  // int packages [3][4]; // 12 locations to store ints

  int packages [3][4] {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  // Read data from 2D array
  // for (size_t i{0}; i < 3; ++i) {

  //   for (size_t j{0}; j < 4; ++j) {
  //     std::cout << packages[i][j] << "   ";
  //   }

  //   std::cout << '\n';
  // }

  // Using dynamic array size
  /*
  for (size_t i{0}; i < std::size(packages); ++i) {

    for (size_t j{0}; j < std::size(packages[i]); ++j) {
      std::cout << packages[i][j] << "   ";
    }

    std::cout << '\n';
  }
  */

  // 3D array
  /*
  int house_block [7] [5] [3] {
      {
          {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
      },
      {
          {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
      },
      {
          { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
      },
      {
            {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
      },
      {
            {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
      },
      {
          {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
      },
      {
            {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
      }
  };

  for(size_t i{0}; i < std::size(house_block); ++i) {

    for (size_t j{0}; j < std::size(house_block[i]); ++j) {

      for (size_t k{0}; k < std::size(house_block[i][j]); ++k) {

        std::cout << house_block[i][j][k] << "    ";
      }
    }
  }
  */

  /*
  const size_t num_cols{3};

  int packages2 [] [num_cols] {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12},
    {100, 110, 120}
  };

  std::cout << '\n';
  std::cout << "Omiting leftmost dimension for 2d array: " << '\n';
  for (size_t i{0}; i < std::size(packages2); ++i) {
    for (size_t j{0}; j < std::size(packages2[i]); ++j) {
      std::cout << "Item (" << i << ", " << j << "): " << packages2[i][j] << '\n';
    }
  }
  */
  /*
  int house_block1 [] [5] [3] {
        
    {
      {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
    },
    {
      {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
    },
    {
      {31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
    },
    {
      {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
    }
        
  };
  */

  int house_block1 [] [5] [3] {
        
    {
      {1,2,3},{4},{7,8,9},{10,11,12},{13,14,15} 
    },
    {
      {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
    },
    {
      {31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
    },
    {
      {46,47,48},{49,50,51},{52,53,54},{55,56,57}  
    }
        
  };
  
  house_block1[0][2][1] = 1021;

	for (size_t i {0} ; i < std::size(house_block1 ); ++i){
        
    for( size_t j{0}; j < std::size(house_block1[i]) ; ++j){
        
      std::cout << "[";

      for( size_t k{0}; k < std::size(house_block1[i][j]) ; ++k){
          
        std::cout << house_block1[i][j][k] << " ";
      }
      std::cout <<"] " ;//Separate elements for good visualization
    }

    std::cout << std::endl;//Separate elements for good visualization
  }
  



  return 0;
}
