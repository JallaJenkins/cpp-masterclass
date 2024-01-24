#include <iostream>
#include <queue>
#include <list>
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
    }
    
private : 
    int m_year;
    std::string m_title;
};

std::ostream& operator<< (std::ostream& out, const Book& operand){
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}

template <typename T, typename Container = std::deque<T>>
void print_queue(std::queue<T, Container> queue){
    std::cout << "queue: [";
  while (!queue.empty()){
    std::cout << " " << queue.front();
    queue.pop();
  }
  std::cout << " ]\n";
}

template <typename T, typename Container = std::deque<T>>
void clear_queue(std::queue<T, Container>& queue){
  std::cout << "clearing queue of size: " << queue.size() << '\n';
  while(!queue.empty()){
    queue.pop();
  }
}

int main(){

  // Creating pushing and accessing
  std::cout << "Creating pushing and accessing:\n";
  std::queue<int> numbers1;
  std::cout << "numbers1: ", print_queue(numbers1);

  std::cout << "filling queue...\n";
  numbers1.push(10);
  numbers1.push(20);
  numbers1.push(30);

  std::cout << "numbers1: ", print_queue(numbers1);

  std::cout << "filling more queue...\n";
  numbers1.push(40);
  numbers1.push(50);
  std::cout << "numbers1: ", print_queue(numbers1);
  
  // Access
  std::cout << "numbers1.front(): " << numbers1.front() << '\n';
  std::cout << "numbers1.back(): " << numbers1.back() << '\n';

  std::cout << "modifiying...\n";
  numbers1.front() = 400;
  numbers1.back() = 500;
  std::cout << "numbers1: ", print_queue(numbers1);

  // Popping
  std::cout << '\n';
  std::cout << "popping:\n";
  numbers1.pop();
  std::cout << "numbers1: ", print_queue(numbers1);
  numbers1.pop();
  std::cout << "numbers1: ", print_queue(numbers1);

  // Clearing a queue
  std::cout << '\n';
  std::cout << "clearing a queue:\n";
  std::cout << "initial size: " << numbers1.size() << '\n';
  clear_queue(numbers1);
  std::cout << "numbers1: ", print_queue(numbers1);
  std::cout << "final size: " << numbers1.size() << '\n';
  
  // Using custom types
  std::cout << '\n';
  std::cout << "queue with user defined type:\n";
  std::queue<Book> books;
  books.push(Book(1921, "The Art of War"));
  books.push(Book(2000, "Social Media Marketing"));
  books.push(Book(2020, "How the Pandemic Changed the World"));

  std::cout << "books: ", print_queue(books);
  std::cout << "books size: " << books.size() << '\n';
  std::cout << "books front: " << books.front() << '\n';
  std::cout << "books back: " << books.back() << '\n';

  // Specifiying the underlying container
  // Not cannot use std::vector with std::queue

  // std::queue<int, std::vector<int>> numbers2;  
  std::queue<int, std::list<int>> numbers3;
  std::queue<int, std::deque<int>> numbers4;

  // numbers2.push(5);  // Compiler error!
  // numbers2.push(6);

  numbers3.push(7);
  numbers3.push(8);

  numbers4.push(9);
  numbers4.push(10);

  // std::cout << "numbers2: ";
  // print_queue(numbers2);       // Compiler error!

  std::cout << "numbers3: ";
  print_queue(numbers3);

  std::cout << "numbers4: ";
  print_queue(numbers4);

  // clear_queue(numbers2);     // Compiler error

  std::cout << '\n';
  return 0;
}
