#include <iostream>
#include <stack>
#include <vector>
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

// template <typename T>
// void print_stack(std::stack<T> stack){

template <typename T, typename Container = std::deque<T>>
void print_stack(std::stack<T, Container> stack){
  // Notice that we are working on a copy here. IMPORTANT
  std::cout << "stack of elements: [";
  while(!stack.empty()){
    std::cout << " " << stack.top();
    stack.pop();
  }
  std::cout << " ]\n";
}

// template <typename T>
// void clear_stack(std::stack<T>& stack){

template <typename T, typename Container = std::deque<T>>
void clear_stack(std::stack<T, Container>& stack){
  std::cout << "Clearing stack of size: " << stack.size() << '\n';
  while(!stack.empty()){
    stack.pop();
  }
}

int main(){

  // Creating std::stacks and storting data
  std::stack<int> numbers1;

  std::cout << "numbers1: ", print_stack(numbers1);

  std::cout << "filling numbers1...\n";
  numbers1.push(10);
  numbers1.push(20);
  numbers1.push(30);
  std::cout << "numbers1: ", print_stack(numbers1); // 30 20 10; 30 is top

  std::cout << "filling more numbers1...\n";
  numbers1.push(40);
  numbers1.push(50);
  std::cout << "numbers1: ", print_stack(numbers1); // 50 40 30 20 10; 50 is top

  std::cout << "---------------------\n";

  // Accessing elements
  std::cout << "top: " << numbers1.top() << '\n';
  print_stack(numbers1);

  // Popping elements off
  std::cout << "popping first element...\n";
  numbers1.pop();
  std::cout << "top: " << numbers1.top() << '\n';
  print_stack(numbers1);
  
  std::cout << "--------------\n";
  std::cout << "Replacing the top...\n";
  numbers1.top() = 55;
  std::cout << "numbers1: ", print_stack(numbers1); 
  
  std::cout << "--------------\n";
  std::cout << "clearing a stack:\n";
  std::cout << "stack initial size: " << numbers1.size() << '\n';
  std::cout << "clearing stack...\n";
  clear_stack(numbers1);
  std::cout << "stack final size: " << numbers1.size() << '\n';
  std::cout << "numbers1: ", print_stack(numbers1);

  // Stacks of user defined types
  std::cout << "--------------\n";
  std::cout << "User defined types:\n";
  std::stack<Book> books;
  books.push(Book(1921, "The Art of War"));
  books.push(Book(2000, "Social Media Marketing"));
  books.push(Book(2020, "How the Pandemic Changed the World"));

  std::cout << "books: ", print_stack(books);
  std::cout << "books size: " << books.size() << '\n';

  std::cout << "--------------\n";

  // Custom undelying sequence container
  std::stack<int, std::vector<int>> numbers2;
  std::stack<int, std::list<int>> numbers3;
  std::stack<int, std::deque<int>> numbers4;

  numbers2.push(5);
  numbers2.push(6);

  numbers3.push(7);
  numbers3.push(8);

  numbers4.push(9);
  numbers4.push(10);

  std::cout << "numbers2: ";
  print_stack(numbers2);

  std::cout << "numbers3: ";
  print_stack(numbers3);

  std::cout << "numbers4: ";
  print_stack(numbers4);

  clear_stack(numbers2);

  std::cout << '\n';
  return 0;
}
