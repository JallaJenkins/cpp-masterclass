#include <iostream>
#include <list>


template <typename T>
std::list<T> union_func(const std::list<T>& l1, const std::list<T>& l2){

  std::list<T> result;
  auto itl1 = l1.begin();
  auto itl2 = l2.begin();
  
  //YOUR CODE WILL GO BELOW THIS LINE 
  //DON'T MODIFY ANYTHING ABOVE THIS LINE
  
  // while(itl1 != l1.end()){
  //   result.push_back(*itl1);
  //   ++itl1;
  // }

  /*
  result = l1;
  
  while(itl2 != l2.end()){
    bool found = false;

    while(itl1 != l1.end()){
      if (*itl1 == *itl2){
        found = true;
        break;
      } 
      ++itl1;
    }

    if (found == false){
      result.push_back(*itl2);
    }

    itl1 = l1.begin();
    ++itl2;
  }
  */

 /*
      // If both at some location, move l1 forward
      // If l1 at last item, keep pointer at last item and move l2
      // If l2 at last item, keep pointer at last item
  // Once not equal, add whichever item is less in value & move pointer on that item
  
  // If both at last item
    // Add item if > last item in result
    //break loop
  
  // Start loop
  while(itl1 != l1.end() && itl2 != l2.end()){
    
    // Compare items until not equal
    while(*itl1 == *itl2){
      
      // If both at end, break loop
      if(itl1 != l1.end() && itl2 != l2.end()){
        break;
      }
      
      // Move forward whichever pointer is behind, unless that pointer is at end, in which case move other pointer. If pointers are equal in position, move itl1.
      if(itl1 - l1.begin() <= itl2 - l2.begin()){
        if(itl1 < l1.end() - 1){
          ++itl1;
        } else if (itl2 < l2.end() - 1){
          ++itl2;
        }
      } else {
        if(itl2 < l2.end() - 1) {
          ++itl2;
        } else if (itl1 < l1.end() - 1){
          ++itl1;
        }
      }
    }

    // Items are not equal or both at end.

    // If items are not equal, add whichever item is lesser, if it is greater than the last item in result, and then increment iterator to next item, if not at end
    if(*itl1 < *itl2) {
      if(*itl1 > result.back()){
        result.push_back(*itl1);
      }
      if(itl1 < l1.end() - 1){
        ++itl1;
      }
    } else {
      if(*itl2 > result.back()){
        result.push_back(*itl2);
      }
      if(itl2 < l2.end() - 1){
        ++itl2;
      }
    }

    // If both items are at end, loop will break
  }

  // Make sure end items are added to result in order
  if(*itl1 <= *itel2){
    if (*itl1 > result.back()){
      result.push_back(*itl1);
    }
    if (*itl2 > result.back()){
      result.push_back(*itl2);
    }
  } else {
    if (*itl2 > result.back()){
      result.push_back(*itl2);
    }
    if (*itl1 > result.back()){
      result.push_back(*itl1);
    }
  }
  
  */

  while( (itl1!=l1.end()) &&(itl2!=l2.end())){

      if(*itl1 == *itl2){
            result.push_back(*itl1);
            ++itl1;
            ++itl2;
        }else if( *itl1 < *itl2){
            result.push_back(*itl1);
            ++itl1;
        }else{
            result.push_back(*itl2);
            ++itl2;
        }
    }

    //Handle remaining elements from bigger list
    while(itl1!=l1.end()){
        result.push_back(*itl1);
        ++itl1;
    }

    while(itl2!=l2.end()){
        result.push_back(*itl2);
        ++itl2;
    }

  //YOUR CODE WILL GO ABOVE THIS LINE 
  //DON'T MODIFY ANYTHING BELOW THIS LINE

  return result;

}


template <typename T>
void print_list( const std::list<T>& l){

    for(auto &e : l){
        std::cout << e << " ";
    }
    std::cout << std::endl;

}


int main(){

  std::list<int> l1 = {3, 4, 5,7,11};
  std::list<int> l2 = {1, 2, 3, 4, 6, 7, 9, 12, 27};

  print_list(l1);
  print_list(l2);

  std::list<int> union_l1_l2 = union_func(l1, l2);
  print_list(union_l1_l2);

  return 0;
}
