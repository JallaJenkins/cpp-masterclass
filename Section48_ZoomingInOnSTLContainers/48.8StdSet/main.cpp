#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <functional>

class Book{
  friend std::ostream& operator<<(std::ostream& out, const Book& operand);

  int m_year;
  std::string m_title;

public:
  Book(int year, std::string title) : m_year{year}, m_title{title} {}
  bool operator<(const Book& right_operand) const {
    return m_year < right_operand.m_year;
  }
};
std::ostream& operator<<(std::ostream& out, const Book& operand){
  out << "Book [" << operand.m_title << ", published: " << operand.m_year <<"]";
  return out;
}

template <typename T>
void print_collection(const T& collection){
  auto it = collection.begin();
  std::cout << "Collection: [ ";
  while (it != collection.end()) {
    std::cout << *it << " ";
    ++it;
  }
  std::cout << "]\n";
}

// Comparator functor
class IntComparator{
public:
  bool operator()(int left, int right) const {
    return (left > right);
  }
};

// Comparator function pointer
bool compare_ints(int left, int right){
  return left < right;
}

int main(){

  // Building sets
  std::set<int> numbers {11, 16, 2, 912, 15, 6, 15, 2}; // Set will sort itself
  std::cout << '\n';
  std::cout << "Building a set, auto-ordering:\n";
  print_collection(numbers);

  std::set<Book> books {
    Book(1930, "Building Computers"),
    Book(1734, "Cooking Food"), 
    Book(1995, "Farming for Beginners"),
  };
  print_collection(books);
  std::cout << "---------------------\n";

  //Code2 : Iterators : forward and back, and constant
    
  std::cout << std::endl;
  std::cout << "iterators : " << std::endl;
  
  auto it = numbers.begin();
  std::cout << " set of numbers : [" ;
  while(it != numbers.end()){
      std::cout << " " << *it ;
      ++it;
  }
  std::cout << "]" << std::endl;
  
  auto it_back = numbers.rbegin();
  std::cout << " set of numbers (reverse) : [" ;
  while(it_back != numbers.rend()){
      std::cout << " " << *it_back ;
      ++it_back;
  }
  std::cout << "]" << std::endl;
      
  auto it_back_books = books.rbegin();
  std::cout << " set of books (reverse) : [" ;
  while(it_back_books != books.rend()){
      std::cout << " " << *it_back_books ;
      ++it_back_books;        
  }
  std::cout << "]" << std::endl;

  //Code3 : Capacity : 
  std::cout << "---------------------" << std::endl;
  
  std::cout << std::endl;
  std::cout << "capacity : " << std::endl;
  std::cout << " numbers : " ;
  print_collection(numbers);
  std::cout << " set max_size : " << numbers.max_size() << std::endl;
  std::cout << " set is empty : " << numbers.empty() << std::endl;
  std::cout << " set size : " << numbers.size() << std::endl;


  std::cout << "---------------------" << std::endl;
  //Modifiers
  
  //Clear
  std::cout << std::endl;
  std::cout << "clear :" << std::endl;
  print_collection(numbers);
  
  numbers.clear();
  
  print_collection(numbers);
  std::cout << std::boolalpha;
  std::cout << "numbers is empty : " << numbers.empty() << std::endl;

  // Insert: returns an std::pair object containing result about the insert operator
  std::cout << '\n';
  std::cout << "Insert:\n";
  numbers = {11, 12, 13, 14, 15};
  print_collection(numbers);

  // Insert 14 won't work because there is already a 14 in the set
  // Will return "false" as the second item in the std::pair return
  numbers.insert(14);
  std::cout << "After insert(14): ", print_collection(numbers);
  std::cout << "-----------------\n";

  // Can capture the insert result through a returned std::pair
  auto result = numbers.insert(20);  // Successful
  // auto result = numbers.insert(14);     // Failed
  std::cout << "first: " << *result.first << '\n';
  std::cout << "second: " << result.second << '\n';

  std::cout << "-----------------\n";
  if(result.second){
    std::cout << "Insertion of " << *result.first << " successful\n";
  } else {
    std::cout << "Could not insert " << *result.first << " because it is a duplicate\n";
  }

  //Emplace 
  std::cout << std::endl;
  std::cout << "emplace : " << std::endl;
  
  print_collection(numbers);
  
  auto result_emplace = numbers.emplace(421); // Succeeds
  // auto result_emplace = numbers.emplace(13);  // Fails

  if(result_emplace.second){
      std::cout << " Emplace of " << *result_emplace.first << " successful" << std::endl;
  }else{
      std::cout << " Emplace of " << *result_emplace.first << " FAILED" << std::endl;
  }
  
  print_collection(numbers);

  //Erase
  std::cout << std::endl;
  std::cout << "erase : " << std::endl;
  
  print_collection(numbers);
  
  auto it_erase = std::find(numbers.begin(),numbers.end(),13);
  
  if(it_erase!= numbers.end()){
      std::cout << "Found 13 !" << std::endl;
  }else{
      std::cout << "Couldn't find 13 !" << std::endl;
  }
  
  //Erase the 13
  if(it_erase!=numbers.end())
      numbers.erase(it_erase);
  
  print_collection(numbers);

  //swap
  std::cout << std::endl;
  std::cout << "swap : " << std::endl;
  
  std::set<int> other_numbers {200,400,600};
  
  std::cout << " numbers : ";
  print_collection(numbers);
  std::cout << " other_numbers :";
  print_collection(other_numbers);
  
  
  numbers.swap(other_numbers);
  
  std::cout << " numbers : ";
  print_collection(numbers);
  std::cout << " other_numbers :";
  print_collection(other_numbers);

  // Change comparator
  std::cout << '\n';
  std::cout << "change comparator:\n";
  // std::set<int> numbers1 {11, 16, 2, 9, 12, 15, 6, 15, 2};  // Use default functor std::less
  // std::set<int, std::less<int>> numbers1 {11, 16, 2, 9, 12, 15, 6, 15, 2};  // Specify functor
  // std::set<int, std::greater<int>> numbers1 {11, 16, 2, 9, 12, 15, 6, 15, 2};  // Specify functor as greater - descending order
  // std::set<int, IntComparator> numbers1 {11, 16, 2, 9, 12, 15, 6, 15, 2};  // Specify custom functor tyoe

  // Specify function pointer - ugly syntax!!
  // std::set<int, bool(*)(int, int)> numbers1(compare_ints);

  // Specifcy function pointer using std::function - nicer syntax
  // std::set<int, std::function<bool(int, int)>> numbers1(compare_ints);

  // Lambda function - std::function syntax
  // std::set<int, std::function<bool(int, int)>> numbers1([](int left, int right){return left < right;});

  // Lambda function - function pointer syntax
  std::set<int, bool(*)(int, int)> numbers1([](int left, int right){return left < right;});

  numbers1.insert({11, 16, 2, 9, 12, 15, 6, 15, 2});
  

  std::cout << "numbers1: [ ";
  for (const auto& elt: numbers1){
    std::cout << elt << " ";
  }
  std::cout << "]\n";

  
  std::cout << '\n';
  return 0;
}
