#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H

#include <iostream>
#include <concepts>

template <typename T>
requires std::is_default_constructible_v<T>
class BoxContainer
{

  static const size_t DEFAULT_CAPACITY = 5;
  static const size_t EXPAND_STEPS = 5;

public:
  BoxContainer(size_t capactiy = DEFAULT_CAPACITY);
  BoxContainer(const BoxContainer& source) requires std::copyable<T>;
  ~BoxContainer();

  // friend function defined within class termplate definition
  // Note this is not a member function
  friend std::ostream& operator<<(std::ostream& out, const BoxContainer<T>& operand){
    
	out << "BoxContainer : [ size :  " << operand.m_size
		<< ", capacity : " << operand.m_capacity
    << ", items : " ;
			
	for(size_t i{0}; i < operand.m_size; ++i){
		out << operand.m_items[i] << " " ;
	}
	out << "]";
    
  return out;
}

  
  // Helper getter methods
  size_t size() const {return m_size;}
  size_t capacity() const {return m_capacity;}
  T get_item(size_t index) const{return m_items[index];}

  // Method to add items to container
  void add(const T& item);

  // Remove items
  bool remove_item(const T& item);
  size_t remove_all(const T& item);

  // In-class operators
  void operator+=(const BoxContainer& operand);
  void operator=(const BoxContainer& source);

public:
  class Iterator{
  public:
    using iterator_category   = std::bidirectional_iterator_tag;
    using difference_type     = std::ptrdiff_t;
    using value_type          = T;
    using pointer_type        = T*;
    using reference_type      = T&;

    Iterator() = default;
    Iterator(pointer_type ptr) : m_ptr(ptr) {}

    reference_type operator*() const {
      return *m_ptr;
    }

    reference_type operator->() {
      return m_ptr;
    }

    Iterator& operator++() {
      m_ptr++; return *this;
    }

    Iterator operator++(int) {
      Iterator tmp = *this;
      ++(*this);
      return tmp;
    }

    // These operators are non members, but can still access private members of Iterator
    friend bool operator== (const Iterator& a, const Iterator& b) {
      return a.m_ptr == b.m_ptr;
    }

    friend bool operator!= (const Iterator& a, const Iterator& b) {
      return a.m_ptr != b.m_ptr;
      // return !(a == b);
      // return a != b;
    }

    Iterator& operator--() {
      m_ptr--; return *this;
    }

    Iterator operator--(int) {
      Iterator tmp = *this;
      --(*this);
      return tmp;
    }

  private:
    pointer_type m_ptr;
  };

  Iterator begin() {return Iterator(&m_items[0]);}
  Iterator end() {return Iterator(&m_items[m_size]);}

private:
  void expand(size_t new_capacity);

private:
  T* m_items;
  size_t m_capacity;
  size_t m_size;

};

// Free operartors
template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T> operator+(const BoxContainer<T>& left, const BoxContainer<T>& right);

// Method definitions moved to header file
template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T>::BoxContainer(size_t capacity)
{
  m_items = new T[capacity];
  m_capacity = capacity;
  m_size = 0;
}

template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T>::BoxContainer(const BoxContainer& source) requires std::copyable<T>
{
  // Set up new box
  m_items = new T[source.m_capacity];
  m_capacity = source.m_capacity;
  m_size = source.m_size;

  // Copy items from source
  for(size_t i{}; i < m_size; ++i ) {
    m_items[i] = source.m_items[i];
  }
}

template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T>::~BoxContainer()
{
  delete[] m_items;
}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::expand(size_t new_capacity){
  if(new_capacity <= m_capacity){
    return; // No need to expand capacity
  }

  std::cout << "Expanding to: " << new_capacity << '\n';

  // Allocate new, larger array
  T* new_items_container = new T[new_capacity];

  // Copy the items over
  for(size_t i{}; i < m_size; ++i){
    new_items_container[i] = m_items[i];
  }

  // Release the old array
  delete[] m_items;

  // Make the box wrap around the new array
  m_items = new_items_container;

  // Update capacity
  m_capacity = new_capacity;

}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::add(const T& item){
  if(m_size == m_capacity)
    expand(m_size + EXPAND_STEPS);
  m_items[m_size] = item;
  ++m_size;
}

template <typename T> requires std::is_default_constructible_v<T>
bool BoxContainer<T>::remove_item(const T& item){
  size_t index{m_capacity + 999};

  for(size_t i{}; i < m_size; ++i){
    if(m_items[i] == item){
      index = i;
      break;
    }
  }

  if(index > m_size){
    return false;
  }

  m_items[index] = m_items[m_size - 1];
  m_size--;
  return true;
}

template <typename T> requires std::is_default_constructible_v<T>
size_t BoxContainer<T>::remove_all(const T& item){
  size_t remove_count{};
  while(this->remove_item(item)){
    remove_count++;
  }

  return remove_count;
}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::operator+=(const BoxContainer& operand){
  // Make sure the current box has enough capacity
  if((m_size + operand.size()) > m_capacity){
    expand(m_size + operand.size());
  }

  // Copy over elements
  for(size_t i{}; i < operand.size(); ++i ) {
    m_items[i + m_size] = operand.m_items[i];
  }

  m_size += operand.size();

}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::operator=(const BoxContainer& source){

  // Check for self-assignment
  if (this == &source){
    return;
  }

  // Harmonize capacity
  if(m_capacity != source.capacity()){
    // value_type* new_items = new value_type[source.capacity()];
    delete[] m_items;
    // m_items = new_items;
    m_items = new T[source.capacity()];
    m_capacity = source.m_capacity;
  }

  // Copy items from source
  for(size_t i{}; i < source.size(); ++i ) {
    m_items[i] = source.m_items[i];
  }
  m_size = source.size();
}

template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T> operator+(const BoxContainer<T>& left, const BoxContainer<T>& right){
  BoxContainer<T> result(left.size() + right.size());
  result += left;
  result += right;
  return result;
}

#endif  // BOX_CONTAINER_H