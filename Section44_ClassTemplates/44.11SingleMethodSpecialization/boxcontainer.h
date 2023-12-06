#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H

#include <iostream>
#include <cstring>

template <typename T = int, typename V = int>
class BoxContainer
{
  static const size_t DEFAULT_CAPACITY = 5;
  static const size_t EXPAND_STEPS = 5;

public:
  BoxContainer(size_t capactiy = DEFAULT_CAPACITY);
  BoxContainer(const BoxContainer& source);
  ~BoxContainer();

  // Helper getter methods
  size_t size() const {return m_size;}
  size_t capacity() const {return m_capacity;}
  T get_item(size_t index) const{return m_items[index];}

  T get_max() const {
    size_t max_index = 0;
    for(size_t i{}; i < m_size; ++i){
      if (m_items[i] > m_items[max_index]) max_index = i;
    }
    return m_items[max_index];
  }

  // Method to add items to container
  void add(const T& item);

  // Remove items
  bool remove_item(const T& item);
  size_t remove_all(const T& item);

  // In-class operators
  void operator+=(const BoxContainer& operand);
  void operator=(const BoxContainer& source);

private:
  void expand(size_t new_capacity);

private:
  T* m_items;
  size_t m_capacity;
  size_t m_size;

};

// Free operartors
template <typename T, typename V>
BoxContainer<T, V> operator+(const BoxContainer<T, V>& left, const BoxContainer<T, V>& right);

template <typename T, typename V>
inline std::ostream& operator<<(std::ostream& out, const BoxContainer<T, V>& operand){
    
	out << "BoxContainer : [ size :  " << operand.size()
		<< ", capacity : " << operand.capacity()
    << ", items : " ;
			
	for(size_t i{0}; i < operand.size(); ++i){
		out << operand.get_item(i) << " " ;
	}
	out << "]";
    
    return out;
}

// Method definitions moved to header file
template <typename T, typename V>
BoxContainer<T, V>::BoxContainer(size_t capacity)
{
  m_items = new T[capacity];
  m_capacity = capacity;
  m_size = 0;
}

template <typename T, typename V>
BoxContainer<T, V>::BoxContainer(const BoxContainer& source)
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

template <typename T, typename V>
BoxContainer<T, V>::~BoxContainer()
{
  delete[] m_items;
}

template <typename T, typename V>
void BoxContainer<T, V>::expand(size_t new_capacity){
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

template <typename T, typename V>
void BoxContainer<T, V>::add(const T& item){
  if(m_size == m_capacity)
    expand(m_size + EXPAND_STEPS);
  m_items[m_size] = item;
  ++m_size;
}

template <typename T, typename V>
bool BoxContainer<T, V>::remove_item(const T& item){
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

template <typename T, typename V>
size_t BoxContainer<T, V>::remove_all(const T& item){
  size_t remove_count{};
  while(this->remove_item(item)){
    remove_count++;
  }

  return remove_count;
}

template <typename T, typename V>
void BoxContainer<T, V>::operator+=(const BoxContainer& operand){
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

template <typename T, typename V>
void BoxContainer<T, V>::operator=(const BoxContainer& source){

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

template <typename T, typename V>
BoxContainer<T, V> operator+(const BoxContainer<T, V>& left, const BoxContainer<T, V>& right){
  BoxContainer<T, V> result(left.size() + right.size());
  result += left;
  result += right;
  return result;
}

// Specializing get_max
/*
template <> inline
const char* BoxContainer<const char*>::get_max() const {
  std::cout << "Using specialized get_max for const char*\n";
  size_t max_index = 0;

  for(size_t i{}; i < m_size; ++i){
    if(strcmp(m_items[i], m_items[max_index]) > 0) {
      max_index = i;
    }
  }

  return m_items[max_index];
}
*/

template <>
const char* BoxContainer<const char*>::get_max() const;

#endif  // BOX_CONTAINER_H