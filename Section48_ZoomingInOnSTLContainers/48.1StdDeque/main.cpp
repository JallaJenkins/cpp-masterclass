#include <iostream>
#include <vector>
#include <deque>


template <typename T>
void print_collection(const T& collection){
  
  auto it = collection.begin();

  std::cout << "Collection [";
  while(it != collection.end()){
    std::cout << " " << *it;
    ++it;
  }

  std::cout << " ]\n";
}


class Item{
  int m_var{0};

public:

  friend std::ostream& operator<< (std::ostream& out, const Item& item);

  Item() : m_var(0) {
    std::cout << "Item default consrtuctor called\n";
  }
  Item(int var) : m_var{var}{
    std::cout << "Item constructor called with: " << var << '\n';
  }
  Item(const Item& source) : m_var{source.m_var} {
    std::cout << "Item copy constructor called with: " << m_var << '\n';
  }
  Item(const Item&& source) : m_var{std::move(source.m_var)} {
    std::cout << "Item move constructor called with: " << m_var << '\n';
  }

  int get() const {
    return m_var;
  }
};

std::ostream& operator<< (std::ostream& out, const Item& item) {
  out << "Item [ value: " << item.m_var << "]";
  return out;
}


int main(){

  // Creating deques
  std::deque<int> numbers = {1, 2, 3, 4, 5, 6};
  // std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
  std::deque<Item> items {Item(22), Item(33), Item(44), Item(55)};
  // std::vector<Item> items {Item(22), Item(33), Item(44), Item(55)};

  std::cout << "numbers: ", print_collection(numbers);
  std::cout << "items: ", print_collection(items);

  // Element access
  std::cout << '\n';
  std::cout << "Element access: " << '\n';
  std::cout << "numbers[3]: " << numbers[3] << '\n';  // no bound check
  std::cout << "numbers.at(3): " << numbers.at(3) << '\n';  // bound check
  std::cout << "numbers[30] (undefined behaviour): " << numbers[30] << '\n';  // no bound check
  // std::cout << "numbers.at(30) (throws exception): " << numbers.at(30) << '\n';
  std::cout << "numbers.front(): " << numbers.front() << '\n';
  std::cout << "numbers.back(): " << numbers.back() << '\n';

  // Deque has no data() method

  // Iterators
  std::cout << "-----------------------\n";

  std::cout << '\n';
  std::cout << "Iterators:\n";

  // begin() and end()
  auto it = numbers.begin();
  std::cout << "Deque (with iterators): [";
  while(it != numbers.end()){
    std::cout << " " << *it;
    ++it;
  }
  std::cout << " ]" << '\n';

  // Reverse iterators
  auto it_r = numbers.rbegin();
  std::cout << "Deque with reverse iterator: [";
  while(it_r!=numbers.rend()){
    std::cout << " " << *it_r;
    ++it_r;
  }
  std::cout << " ]\n";

  std::cout << "-----------------------\n";

  // Capacity
  std::cout << '\n';
  std::cout << "capacity:\n";
  std::cout << "numbers size: " << numbers.size() << '\n';
  std::cout << "numbers max size: " << numbers.max_size() << '\n';
  std::cout << std::boolalpha;
  std::cout << "is numbers empty? " << numbers.empty() << '\n';

  numbers.push_back(20);
  std::cout << "after pushing 20 to back:\n";
  print_collection(numbers);
  std::cout << "numbers size: " << numbers.size() << '\n';
  std::cout << "-----------------------\n";

  // Modifiers
  std::cout << '\n';

  std::cout << "clear: " << '\n';
  numbers.clear();
  print_collection(numbers);
  std::cout << "numbers size: " << numbers.size() << '\n';

  numbers = {10, 20, 30, 40, 50, 60};

  std::cout << "after reassignment:\n";
  print_collection(numbers);
  std::cout << "numbers size: " << numbers.size() << '\n';
  std::cout << "-----------------------\n";

  // Insert
  std::cout << '\n';
  std::cout << "insert:\n";

  return 0;
}
