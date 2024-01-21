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
  auto it_pos = numbers.begin() + 2;

  print_collection(numbers);
  std::cout << "*it_pos before inserts: " << *it_pos << '\n';
  numbers.insert(it_pos, 300);
  print_collection(numbers);
  std::cout << "*it_pos after first insert: " << *it_pos << '\n';

  numbers.insert(it_pos, 400);  // it_pos moves after every other insert - ??
  print_collection(numbers);    // elements are added to the left of element at it_pos
  std::cout << "*it_pos after second insert: " << *it_pos << '\n';

  numbers.insert(it_pos, 500);  
  print_collection(numbers);    
  std::cout << "*it_pos after third insert: " << *it_pos << '\n';

  numbers.insert(it_pos, 600);  
  print_collection(numbers);    
  std::cout << "*it_pos after fourth insert: " << *it_pos << '\n';

  // Emplace
  std::cout << '\n';
  std::cout << "emplace:\n";
  auto it_item_pos = numbers.begin() + 2;
  numbers.emplace(it_item_pos, 45);   // The parameters following the iterator are 
                                      // passed to a constructor of the type stored in the vector

  print_collection(numbers);

  // Erase
  std::cout << '\n';
  std::cout << "erase:\n";
  numbers.erase(numbers.begin() + 4);
  print_collection(numbers);
  numbers.erase(numbers.begin() + 1, numbers.begin() + 4);
  print_collection(numbers);

  // Emplace_back
  std::cout << '\n';
  std::cout << "emplace_back:\n";
  numbers.emplace_back(10);
  numbers.emplace_back(11);
  numbers.emplace_back(12);
  print_collection(numbers);

  // Pop back
  std::cout << '\n';
  std::cout << "pop_back:\n";
  numbers.pop_back();
  print_collection(numbers);
  numbers.pop_back();
  print_collection(numbers);
  numbers.pop_back();
  print_collection(numbers);

  //Resize

  std::cout << '\n';
  std::cout << "resize:\n";
  std::cout << "resize(Before):\n";
  print_collection(numbers);
  std::cout << "numbers size: " << numbers.size() << '\n';

  numbers.resize(30);
  std::cout << "after resize:\n";
  print_collection(numbers);
  std::cout << "numbers size: " << numbers.size() << '\n';

  // Can reize down
  std::cout << "resize down:\n";
  numbers.resize(10);
  print_collection(numbers);
  std::cout << "numbers size: " << numbers.size() << '\n';

  // Swap

  std::cout << std::endl;
  std::cout << "swap : " << std::endl;
  
  std::deque<Item> other_items = {Item(100),Item(200),Item(300)};
  
  std::cout << "items : " ;
  print_collection(items);
  
  std::cout << "other_items : " ;
  print_collection(other_items);
  
  //items.swap(other_items);
  other_items.swap(items);
  
  std::cout << "after swap : " << std::endl;
  
  std::cout << "items : " ;
  print_collection(items);
  
  std::cout << "other_items : " ;
  print_collection(other_items); 
  

  return 0;
}
