#include <iostream>
#include <set>
#include <vector>

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

  std::cout << '\n';
  return 0;
}
