#include <iostream>

template <typename T>
int hunt_down(T value, const T* collection, size_t size) {
    for(size_t i{}; i < size; ++i) {
        if(collection[i] == value) {
            return i;
        }
    }
    return -1;
}

int main(){

  const unsigned int ids[] {1122,4432,7828,9022,3903,3015,2072};
  unsigned int id_to_find {2222};
  hunt_down(id_to_find,ids,7);

  return 0;

}
