#include "boxcontainer.h"

BoxContainer::BoxContainer(size_t capacity)
{
  m_items = new value_type[capacity];
  m_capacity = capacity;
  m_size = 0;
}

BoxContainer::BoxContainer(const BoxContainer& source)
{
  // Set up new box
  m_items = new value_type[source.m_capacity];
  m_capacity = source.m_capacity;
  m_size = source.m_size;

  // Copy items from source
  for(size_t i{}; i < m_size; ++i ) {
    m_items[i] = source.m_items[i];
  }
}

BoxContainer::~BoxContainer()
{
  delete[] m_items;
}

void BoxContainer::stream_insert(std::ostream& out) const {

  out << "BoxContainer: [ size: " << m_size
      << ", capacity: " << m_capacity
      << ", items: ";

      for(size_t i{}; i < m_size; ++i){
        out << m_items[i] << " ";
      }

      std::cout << "]";
}

void BoxContainer::expand(size_t new_capacity){
  if(new_capacity <= m_capacity){
    return; // No need to expand capacity
  }

  std::cout << "Expanding to: " << new_capacity << '\n';

  // Allocate new, larger array
  value_type* new_items_container = new value_type[new_capacity];

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

void BoxContainer::add(const value_type& item){
  if(m_size == m_capacity)
    expand(m_size + EXPAND_STEPS);
  m_items[m_size] = item;
  ++m_size;
}

bool BoxContainer::remove_item(const value_type& item){
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

size_t BoxContainer::remove_all(const value_type& item){
  size_t remove_count{};
  while(this->remove_item(item)){
    remove_count++;
  }

  return remove_count;
}

void BoxContainer::operator+=(const BoxContainer& operand){
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
void BoxContainer::operator=(const BoxContainer& source){

  // Check for self-assignment
  if (this == &source){
    return;
  }

  // Harmonize capacity
  if(m_capacity != source.capacity()){
    // value_type* new_items = new value_type[source.capacity()];
    delete[] m_items;
    // m_items = new_items;
    m_items = new value_type[source.capacity()];
    m_capacity = source.m_capacity;
  }

  // Copy items from source
  for(size_t i{}; i < source.size(); ++i ) {
    m_items[i] = source.m_items[i];
  }
  m_size = source.size();
}

BoxContainer operator+(const BoxContainer& left, const BoxContainer& right){
  BoxContainer result(left.size() + right.size());
  result += left;
  result += right;
  return result;
}