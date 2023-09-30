#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H
#include "stream_insertable.h"

class BoxContainer : public StreamInsertable
{

  // typedef int value_type;  // Depreciated method
  using value_type = int; // Allows us to change what's stored in the vector object

  static const size_t DEFAULT_CAPACITY = 30;

public:
  BoxContainer(size_t capactiy = DEFAULT_CAPACITY);
  BoxContainer(const BoxContainer& source);
  ~BoxContainer();

  // StreamInsertable Interface
  virtual void stream_insert(std::ostream& out) const override;

  // Helper getter methods
  size_t size() const {return m_size;}
  size_t capacity() const {return m_capacity;}

  // Method to start playing around with class
  void dummy_initialize(){

    // Put in 10 items
    for(size_t i{}; i < 10; ++i){
      m_items[i] = i + 12;
    }

    // Set the size
    m_size = 10;

    // Using the default capacity
  }

private:
  value_type* m_items;
  size_t m_capacity;
  size_t m_size;

};

#endif  // BOX_CONTAINER_H