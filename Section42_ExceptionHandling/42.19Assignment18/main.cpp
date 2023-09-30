#include <iostream>
#include <fstream>
#include <string>

void read_from_file(std::string_view filename, size_t size, int * data)
{
    std::ifstream fstrem_in{ filename.data() }; // We may fail to open the file

    if(!fstrem_in){
      throw std::runtime_error(std::string("Unable to open file ") + filename.data());
    }
    
    int value;
    int index{};
    while (fstrem_in >> value) {
        data[index++] = value;
    }
    //Something might go wrong in the process of reading the file.

    if(!fstrem_in.eof()){
      throw std::runtime_error("End of file not reached - trouble reading from file");
    }
  
}

int main(){

  int data[4]{};
  // read_from_file("numbers.txt", std::size(data), data);
  try{
    read_from_file("numberss.txt", std::size(data), data);
  

    for(int& number: data){
      std::cout << number << ", ";
    }

  } catch(std::exception& ex) {
    std::cout << "Error reading from file: " << ex.what() << '\n';
  }

  std::cout << '\n';

  return 0;
}
