#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Book{
  friend std::ostream& operator<< (std::ostream& out, const Book& operand);
public : 

  Book(int year, std::string title) 
    : m_year(year),m_title(title)
    {
    }
      
  bool operator< (const Book & right_operand)const{
    return this->m_year < right_operand.m_year;
  }
  
  
  
  bool operator> (const Book & right_operand)const{
    return this->m_year > right_operand.m_year;
  }
  
    
  bool operator==(const Book&  right_operand)const{
    return (this  ->m_year == right_operand.m_year);
  }
  
  
public : 
  int m_year;
  std::string m_title;
};

std::ostream& operator<< (std::ostream& out, const Book& operand){
  out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
  return out;
}

template<typename T>
void print_collection(const T& collection){
  std::cout << "Collection: [";
  for(const auto& elt : collection){
    std::cout << " " << elt;
  }
  std::cout << " ]\n";
}

int main(){

  // Sort using default comparator
  std::vector<int> collection {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
  // std::list<int> collection {5, 7, 4, 2, 8, 6, 1, 9, 0, 3}; // Gives cryptic compiler errors! No random access iterator

  std::cout << "unsorted collection: ", print_collection(collection);
  // std::sort(std::begin(collection), std::end(collection));
  // std::sort(std::begin(collection), std::end(collection), std::less<int>());
  // std::sort(std::begin(collection), std::end(collection), std::greater<int>());
  std::sort(std::begin(collection), std::end(collection), [](int x, int y){return x < y;});
  std::cout << "sorted collection: ", print_collection(collection);

  std::cout << "----------------------\n";

  // Custom items
  std::vector<Book> books {Book(1734,"Cooking Food"),
                    Book(2000,"Building Computers"),Book(1995,"Farming for Beginners")};

  std::cout << "unsorted books: ", print_collection(books);

  // std::sort(std::begin(books), std::end(books));
  // std::sort(std::begin(books), std::end(books), std::less<Book>());
  // std::sort(std::begin(books), std::end(books), std::greater<Book>());

  auto cmp = [](const Book& left, const Book& right){return left < right;};

  std::sort(std::begin(books), std::end(books), cmp);

  std::cout << "sorted books: ", print_collection(books);
  std::cout << '\n';
  return 0;
}
