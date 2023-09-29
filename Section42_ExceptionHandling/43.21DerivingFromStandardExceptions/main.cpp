#include <iostream>

class DivideByZeroException : public std::exception {
public:
  DivideByZeroException(int a, int b) noexcept
    : std::exception(), m_a(a), m_b(b)
    {}

  virtual const char* what() const noexcept override {
    return (std::string("Divide by zero detected, dividing ") + std::to_string(m_a) + std::string(" by ") + std::to_string(m_b)).c_str();
  }

  int get_a() const {
    return m_a;
  }

  int get_b() const {
    return m_b;
  }

private:
  int m_a{};
  int m_b{};

};

int divide(int a, int b) {
  if(b==0) 
    throw DivideByZeroException(a, b);
  return a/b;
}

int main(){

  try{
    divide(10, 0);
  }
  catch(std::exception& ex){

    // We know that the thwon exception contains a DivideByZeroException part so we can downcast safely and call non-virtual functions
    /*
    DivideByZeroException* d_z = dynamic_cast<DivideByZeroException*>(&ex);

    if(d_z) {
      std::cout << ex.what() << ": dividing " << d_z->get_a()
        << " by " << d_z->get_b() << '\n';
    }
    */

   // Or we can just modify the throwing function to include the member data in the what() return value

    std::cout << ex.what() << '\n';

  }

  return 0;
}
