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
    
  return 0;
}
