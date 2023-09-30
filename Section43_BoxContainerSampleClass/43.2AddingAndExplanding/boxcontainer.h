#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H
#include "stream_insertable.h"

class BoxContainer : public StreamInsertable
{

  // typedef int value_type;  // Depreciated method
  using value_type = int; // Allows us to change what's stored in the vector object

  static const size_t DEFAULT_CAPACITY = 30;
  static const size_t EXPAND_STEPS = 5;

public:
  BoxContainer(size_t capactiy = DEFAULT_CAPACITY);
  BoxContainer(const BoxContainer& source);
  ~BoxContainer();

  // StreamInsertable Interface
  virtual void stream_insert(std::ostream& out) const override;

  // Helper getter methods
  size_t size() const {return m_size;}
  size_t capacity() const {return m_capacity;}

  // Method to add items to container
  void add(const value_type& item);

private:
  void expand(size_t new_capacity);

private:
  value_type* m_items;
  size_t m_capacity;
  size_t m_size;

};

#endif  // BOX_CONTAINER_H