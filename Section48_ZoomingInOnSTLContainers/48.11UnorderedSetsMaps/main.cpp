#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

template<typename T>
void show_collection( const T& collection){
    
    std::cout << " [" ;
    for(const auto& elt : collection){
        std::cout << " " << elt ;
    }
    std::cout << "]" << std::endl;
    
}

template <typename T>
void show_map_collection( const T& collection){
    
    std::cout << " [" ;
    for(const auto& [key,value ]: collection){
        std::cout << " (" << key << "," << value << ")" ;
    }
    std::cout << "]" << std::endl;
    
}

int main(){

  // std::set<int> collection1 {11,16,2,912,15,6,15,2} ;
  std::unordered_set<int> collection1 {11,16,2,912,15,6,15,2} ;

  // std::map<int, int> collection2 {{1,11},{0,12},{4,13},{2,14},{3,15}};
  std::unordered_map<int, int> collection2 {{1,11},{0,12},{4,13},{2,14},{3,15}};

  std::cout << "collection1: ", show_collection(collection1);
  std::cout << "collection2: ", show_map_collection(collection2);


  return 0;
}
