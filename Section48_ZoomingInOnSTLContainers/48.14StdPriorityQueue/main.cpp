#include <iostream>
#include <queue>
#include <vector>
#include <deque>

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
        // return this->m_year > right_operand.m_year;
        // return this->m_title < right_operand.m_title;

        
    }
    
private : 
    int m_year;
    std::string m_title;
};

std::ostream& operator<< (std::ostream& out, const Book& operand){
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}

template <typename T, typename Container = std::vector<int>, typename Comparator = std::less<typename Container::value_type>>
void print_priority_queue(std::priority_queue<T, Container, Comparator> p_queue){

// template<typename T,
//                     typename Container = std::vector<T>,
//                     typename Compare = std::less<typename Container::value_type>>  
// void print_priority_queue(std::priority_queue<T,Container,Compare> p_queue){ 
    std::cout << "p_queue: [";
    while (!p_queue.empty()){
    std::cout << " " << p_queue.top();
    p_queue.pop();
  }
  std::cout << " ]\n";
}

// template <typename T, typename Comparator = std::less<T>>>
// void clear_queue(std::priority_queue<T, Comparator>& p_queue){

template<typename T,
                    typename Container = std::vector<T>,
                    typename Compare = std::less<typename Container::value_type>>  
void clear_queue(std::priority_queue<T,Container,Compare>& p_queue){ 
  std::cout << "clearing p_queue of size: " << p_queue.size() << '\n';
  while(!p_queue.empty()){
    p_queue.pop();
  }
}

int main(){

  //Creating printing and accessing
  std::priority_queue<int> numbers1;
  std::cout << "numbers1: ", print_priority_queue(numbers1);

  numbers1.push(10);
  numbers1.push(8);
  numbers1.push(12);

  std::cout << "numbers1: ", print_priority_queue(numbers1);

  numbers1.push(11);
  numbers1.push(3);

  std::cout << "numbers1: ", print_priority_queue(numbers1);

  // Access
  std::cout << "numbers1.top(): " << numbers1.top() << '\n';

  // Can't modiy through top reference; returns a const reference
  std::cout << '\n';
  std::cout << "modify top element through top():\n";
  // numbers1.top() = 500;    // Compiler error
  std::cout << "Compiler error!\n";

  // Popping pops the highest priority element; greatest element by default
  std::cout << '\n';
  std::cout << "popping data...\n";
  numbers1.pop();
  std::cout << "numbers1: ", print_priority_queue(numbers1);
  std::cout << "popping data...\n";
  numbers1.pop();
  std::cout << "numbers1: ", print_priority_queue(numbers1);
  std::cout << "popping data...\n";
  numbers1.pop();
  std::cout << "numbers1: ", print_priority_queue(numbers1);

  // Clear
  std::cout << '\n';
  std::cout << "clearing a priority queue:\n";
  std::cout << "current size: " << numbers1.size() << '\n';
  std::cout << "clearing...\n";
  clear_queue(numbers1);
  std::cout << "cleared size: " << numbers1.size() << '\n';
  std::cout << "numbers1: ", print_priority_queue(numbers1);

  // User defined types
  // Type must impliment operator<

  std::cout << '\n';
  std::cout << "User defined types:\n";
  std::priority_queue<Book> books;
  books.push(Book(1921, "The Art of War"));
  books.push(Book(2020, "Social Media Marketing"));
  books.push(Book(1999, "Converging Lines in Modern Economy"));
  books.push(Book(1998, "Driving Current Triggered Transistors"));

  std::cout << "books: ", print_priority_queue(books);
  std::cout << "books size: " << books.size() << '\n';
  std::cout << "books top: " << books.top() << '\n';

  // Specfiy container type and comparator
  std::cout << '\n';
  std::cout << "changing the comparator and container:\n";

  // std::priority_queue<int, std::vector<int>, std::less<int>> numbers2;
  // std::priority_queue<int, std::vector<int>, std::greater<int>> numbers2;
  // std::priority_queue<int, std::deque<int>, std::greater<int>> numbers2;
  
  // Using your own functor
  auto cmp = [](int left, int right){return left < right;};
  std::priority_queue<int, std::vector<int>, decltype(cmp)> numbers2(cmp);

  numbers2.push(10);
  numbers2.push(8);
  numbers2.push(12);

  std::cout << "numbers2: ", print_priority_queue(numbers2);

  return 0;
}
