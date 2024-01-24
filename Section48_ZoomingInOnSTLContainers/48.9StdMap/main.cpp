#include <iostream>
#include <functional>
#include <map>

class IntComparator {
public : 
    bool operator()( int left, int right) const { 
        return (left < right); 
    }
};

bool compare_ints(int left, int right){
    return (left < right);
}


class Book{
    friend std::ostream& operator<< (std::ostream& out, const Book& operand);
public : 
    Book() = default;
    Book(int year, std::string title) 
        : m_year(year),m_title(title)
        {
        }
        
    bool operator< (const Book & right_operand)const{
        return this->m_year < right_operand.m_year;
    }
    
private : 
    int m_year;
    std::string m_title;
};

std::ostream& operator<< (std::ostream& out, const Book& operand){
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}

/*
// This function will work, but is confusing b/c it only prints collections that hold key/value pairs
template <typename T>
void print_collection(const T& collection){
  auto it = collection.begin();
  std::cout << "Collection: [ ";
  while (it != collection.end()) {
    std::cout << "{" << it->first << ", " << it->second << "} " ;
    ++it;
  }
  std::cout << "]\n";
}
*/

template <typename T, typename K>
void print_map(const std::map<T, K>& map){
  auto it = map.begin();
  std::cout << "map elements: [ ";
  while(it != map.end()){
    std::cout << "{" << it->first << ", " << it->second << "} ";
    ++it;
  }
  std::cout << "]\n";

}

int main(){

  //Code1 : Building maps : Notice that things are stored by key by default
  // regardless of the order you put them in the collection in .
  std::cout << std::endl;
  std::cout << "Creating maps : " << std::endl;

  std::map<int,int> numbers {{1,11},{0,12},{4,13},{2,14},{3,15}};

  std::cout << " numbers : " ;
  print_map(numbers);

  //Map of custom types : Need to implement operator<
  std::map<int,Book> books {
                          {2,Book(1734,"Cooking Food")},
                          {0,Book(1930,"Building Computers")},
                          {1,Book(1995,"Farming for Beginners")}
                      };
  std::cout << " books : " ;
  print_map(books);

  //Code2 : Element access with regular loops
  //A std::map can be though of as a collection of std::pair's
  std::cout << std::endl;
  std::cout << "Looping around printing stuff : " << std::endl;
  std::cout << std::endl;
  std::cout << " printing books with regular range based for loop [] syntax (C++17) :" << std::endl;

  for(const auto&[key, value] : books){
    std::cout << " book [" << key << "]: " << value << '\n';
  }

  std::cout << '\n';
  std::cout << "using C++11 loop auto syntax:\n";
  for(const auto& elt: books){
    std::cout << " book [" << elt.first << "]: " << elt.second << '\n';
  }

  std::cout << '\n';
  std::cout << "using explicit std::pair type in loop statement:\n";
  for(const std::pair<int, Book>& elt: books){
    std::cout << " book [" << elt.first << "]: " << elt.second << '\n';
  }

  std::cout << "----------------------------------\n";

  std::cout << '\n';
  std::cout << "Keys can be anything, including std::string:\n";
  std::map<std::string, std::string> address_book;

  address_book["Daniel Gray"] = "Kigali, KG St 334 #56";
  address_book["Steve Morris"] = "Huye, SH St 27 #78";
  address_book["John Snow"] = "Musanze, NM St 33 #89";
  address_book["Henry King"] = "Muhanga, SM St 128 #3";

  for(const auto& [key, value] : address_book){
    std::cout << " " << key << " lives at address: " << value << '\n';
  }

  std::cout << "----------------------------------\n";

  // Iterators
  std::cout << '\n';
  std::cout << "Iterators:\n";
  auto it_access = numbers.begin();
  std::cout << "numbers (forward iterators): [";
  while(it_access != numbers.end()){
    std::cout << " " << numbers[it_access->first];
    ++it_access;
  }
  std::cout << " ]\n";

  // Modifying values through iterators
  print_map(numbers);
  auto it_modify = numbers.begin();
  while(it_modify != numbers.end()){
    numbers[it_modify->first] = 222;
    ++it_modify;
  }
  print_map(numbers);

  // Iterating over books in reverse
  std::cout << '\n';
  std::cout << "(iterators) set of books (reverse):\n";
  auto it_back_books = books.rbegin();
  while (it_back_books != books.rend()){
    std::cout << " " << it_back_books->first << " - " << it_back_books->second << '\n';
    ++it_back_books;
  }

  //Code4 : Capacity : 
    std::cout << "---------------------" << std::endl;
    
    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "capacity : " << std::endl;
    
    std::cout << " numbers : ";
    print_map(numbers);
    std::cout << " map max_size : " << numbers.max_size() << std::endl;
    std::cout << " map is empty : " << numbers.empty() << std::endl;
    std::cout << " map size : " << numbers.size() << std::endl;
    
    std::cout << "---------------------" << std::endl;

   //Clear
    std::cout << std::endl;
    std::cout << "clear :" << std::endl;
    
    std::cout << " numbers : " ;
    print_map(numbers);
    
    numbers.clear();
    
    std::cout << " numbers : " ;
    print_map(numbers);
    std::cout << std::boolalpha;
    std::cout << " numbers is empty : " << numbers.empty() << std::endl;

  
  // Insert returns std::pair with success info bool as second element
  std::cout << '\n';
  std::cout << "insert:\n";
  numbers = {{0,11},{1,12},{2,13},{3,14},{4,15}}; 
  print_map(numbers);
  std::cout << "inserting...\n";

  // Insert key 2 will fail as it is already in the map
  numbers.insert({2, 44});

  // Inserting with a new key will work
  numbers.insert({5, 15});
  print_map(numbers);

  // Capturing insert result
  auto result = numbers.insert({6, 17});
  std::cout << "result.second: " << result.second << '\n';

  // Emplace
  std::cout << '\n';
  std::cout << "emplace:\n";
  // auto result_emplace = numbers.emplace({7, 18});   // Compiler error!
  auto result_emplace = numbers.emplace(std::make_pair(7, 18));
  print_map(numbers);

  // Find/erase
  std::cout << '\n';
  std::cout << "find/erase:\n";
  auto it_erase = numbers.find(3);    // With maps can find key directly
  if(it_erase != numbers.end()){
    std::cout << "Found element with key " << it_erase->first << ": " << it_erase->second << '\n';
    numbers.erase(it_erase);
  } else {
    std::cout << "No element with key 3\n";
  }
  print_map(numbers);

  // Using custom comparators
  std::cout << '\n';
  std::cout << "Custom comparators:\n";

  // std::map<int, int> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};//Default
  // std::map<int, int, std::less<int>> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};//Specify less
  // std::map<int, int, std::greater<int>> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};//Specify greater

  // Custom functor
  // std::map<int, int, IntComparator> numbers2 {{1,11},{0,12},{4,13},{2,14},{3,15}};

  // Custom function pointer - can also use std::function
  // std::map<int, int, bool(*)(int, int)> numbers2 (compare_ints);

  // Lambda function - can also use std::function
  std::map<int, int, bool(*)(int, int)> numbers2 ([](int left, int right){return left > right;});

  numbers2.insert({{1,11},{0,12},{4,13},{2,14},{3,15}});

  std::cout << "numbers2 : [ ";
  for(const auto& [key,value] : numbers2){
      std::cout << " (" << key << "," << value << ")";
  }
  std::cout << "]" << std::endl;
  

  std::cout << '\n';
  return 0;
}
