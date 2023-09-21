#include <iostream>
#include <string>

class SomethingIsWrong{
public:
  SomethingIsWrong(const std::string& s)
    : m_message(s) 
  {
  }

  // SomethingIsWrong(const SomethingIsWrong& source)
  //   : SomethingIsWrong(source.m_message)
  // {
  //   std::cout << "Copy constructor for SomethingIsWrong called\n";
  // }

  ~SomethingIsWrong(){
    std::cout << "Destructor called for SomethingIsWrong\n";
  }

  const std::string& what() const {
    return m_message;
  }

private:
  std::string m_message;
};

void do_something(size_t i){
  if (i==2) {
    throw SomethingIsWrong("i is 2");
  }
  std::cout << "Iteration: " << i << '\n';
}

int main(){

  for(size_t i{0}; i < 5; ++i) {
    try {
      do_something(i);
    } catch (SomethingIsWrong& ex) {
      std::cout << "Exception caught: " << ex.what() << '\n';
    }
  }

  return 0;
}
