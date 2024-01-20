#include <iostream>
#include <vector>
#include <forward_list>
#include <algorithm>
#include <deque>

template <typename T>
void print_collection(const T& collection){
    
    auto it = collection.begin();
    
    std::cout << " Collection [";
    while(it != collection.end()){
        std::cout << " " << *it ;
        ++it;
    }
    std::cout << "]" << std::endl;
}

int main(){

  std::vector<int> v_numbers {1, 2, 3, 4, 5};
  // auto v_it_insert = v_numbers.before_begin();

  std::forward_list<int> numbers = {100, 2, 3, 4, 5};
  std::cout << '\n';
  print_collection(numbers);

  // Element access
  std::cout << "front element: " << numbers.front() << '\n';

  //Modifiers
    
  std::cout << "---------------------" << std::endl;
  std::cout << std::endl;
  std::cout << "modifiers : " << std::endl;
  
  //Clear
  std::cout << std::endl;
  std::cout << "clear :" << std::endl;
  print_collection(numbers);
  
  numbers.clear();
  
  print_collection(numbers);
  std::cout << std::boolalpha;

  //Insert after
  std::cout << std::endl;
  std::cout << "insert_after : " << std::endl;
  numbers = {11,12,13,14,15};
  print_collection(numbers);
  auto it_insert = numbers.before_begin();
  numbers.insert_after(it_insert, 333);
  print_collection(numbers);

  //Emplace after : create in place after an iterator
  std::cout << std::endl;
  std::cout << "emplace_after : " << std::endl;
  numbers.emplace_after(it_insert, 444);
  print_collection(numbers);

  // Erase after
  std::cout << '\n';
  std::cout << "erase after:\n";
  auto v_it_erase = std::find(v_numbers.begin(), v_numbers.end(), 4);
  
  auto it_erase = std::find(numbers.begin(), numbers.end(), 13);
  ((it_erase != numbers.end()) ?
    std::cout << "Found 14\n" :
    std::cout << "14 not found\n");

  // Erase the 14
  numbers.erase_after(it_erase);
  print_collection(numbers);

  v_numbers.erase(v_it_erase);
  print_collection(v_numbers);

  //pop_front
  std::cout << std::endl;
  std::cout << "pop_front : " << std::endl;
  
  print_collection(numbers);
  
  numbers.pop_front();
  
  print_collection(numbers);


  //resize : up or down
  std::cout << std::endl;
  std::cout << "resize : " << std::endl;
  
  print_collection(numbers);
  
  v_numbers.resize(10);
  print_collection(v_numbers);
  numbers.resize(10);
  print_collection(numbers);
  
  v_numbers.resize(3);
  numbers.resize(3); // When you resize down, the elements are lost for good.
                      // if you resize up again,you won't get them back.
  
  print_collection(v_numbers);
  print_collection(numbers);
  
  v_numbers.resize(10);
  numbers.resize(10);
  
  print_collection(v_numbers);
  print_collection(numbers);

  std::cout << std::endl;
  std::cout << "swap : " << std::endl;
  
  std::forward_list<int> other_numbers {200,400,600};
  
  std::cout << " numbers : ";
  print_collection(numbers);
  
  std::cout << " other_numbers :";
  print_collection(other_numbers);
  
  
  numbers.swap(other_numbers);
  
  std::cout << " numbers : ";
  print_collection(numbers);
  
  std::cout << " other_numbers :";
  print_collection(other_numbers);

  // std::vector<int> v_other_numbers = {100, 200, 300, 400} ;
  // v_numbers.swap(v_other_numbers);
  // print_collection(v_numbers);

  std::cout << '\n';
  std::cout << "merge:\n";
  std::forward_list<int> numbers1 {1, 5, 6};
  std::forward_list<int> numbers2 {9, 2, 4};

  std::cout << "numbers1: ", print_collection(numbers1);
  std::cout << "numbers2: ", print_collection(numbers2);

  std::cout << "merging...\n";
  numbers1.merge(numbers2);

  std::cout << "numbers1: ", print_collection(numbers1);
  std::cout << "numbers2: ", print_collection(numbers2);

  // std::vector<int> v_numbers1 {1, 5, 6};
  // std::vector<int> v_numbers2 {9, 2, 4};
  // std::cout << "merging...\n";
  // v_numbers1.merge(v_numbers2);   // Error - no method

  // std::deque<int> d_numbers1 {1, 5, 6};
  // std::deque<int> d_numbers2 {9, 2, 4};
  // std::cout << "merging...\n";
  // d_numbers1.merge(d_numbers2);   // Error - no method

  //splice_after : moving a range of elements from one container to another
  std::cout << std::endl;
  std::cout << "splice_after : " << std::endl;
  
  numbers1 = {1,5,6,8,3};
  numbers2 = {9,2,4,7,13,11,17};
  
  std::cout << " numbers1 : " ;
  print_collection(numbers1);
  
  std::cout << " numbers2 : ";
  print_collection(numbers2);

  numbers1.splice_after(numbers1.before_begin(), numbers2, numbers2.before_begin(), 
                        numbers2.end());

  std::cout << " numbers1 : " ;
  print_collection(numbers1);
  
  std::cout << " numbers2 : ";
  print_collection(numbers2);

  //Remove
  std::cout << std::endl;
  std::cout << "remove : " << std::endl;
  numbers = { 1,100,2,3,10,1,11, 1, 1, -1,12 };
  print_collection(numbers);
  numbers.remove(1);
  auto test = numbers.remove(200);
  print_collection(numbers);
  std::cout << "test: " << test << '\n';

  // Remove if
  auto over_10 = [](int n){return n > 10;};
  numbers.remove_if(over_10);
  print_collection(numbers);

  //reverse
  std::cout << std::endl;
  std::cout << "reverse : " << std::endl;
  
  numbers = { 1,100,2,3,10,1,11,-1,12 };
  
  print_collection(numbers);
  
  numbers.reverse();
  
  print_collection(numbers);

  // v_numbers.reverse(); // Error - vectors have no such method
  
  //Unique : Removes contiguous duplicates
  //Removes duplicated 100 and 11, but doesn't remove 1
  std::cout << std::endl;
  std::cout << "unique : " << std::endl;
  
  numbers = { 1,100,100,2,3,10,1,11,11,-1,12,10,1 };
  
  print_collection(numbers);
  numbers.unique();
  print_collection(numbers);
 
  //Sort
  std::cout << std::endl;
  std::cout << "sort : " << std::endl;

  // If we want to remove ALL duplciates, we can sort first
  numbers.sort();
  numbers.unique();
  print_collection(numbers);

  return 0;
}
