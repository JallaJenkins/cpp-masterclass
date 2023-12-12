#include "boxcontainer.h"
#include <cstring>

template <> inline requires std::is_default_constructible_v<T>
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