#include <iostream>
#include <coroutine>
#include <cassert>

template <typename T>
struct generator {
  struct promise_type { 
    generator get_return_object() { return generator(this); }    
    std::suspend_always initial_suspend() { return {}; }        
    std::suspend_always final_suspend() noexcept{ return {}; }
  
    void unhandled_exception() noexcept
    {
      std::rethrow_exception(std::current_exception());
    }

    int m_value;  

    std::suspend_always yield_value(T val) {   // Return method for co_yield
      m_value = val;
      return {};
    }

    void return_void(){
      std::cout << "Returning void...\n";
    };        
  };
  generator(promise_type* p)
    : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}
  ~generator(){
    std::cout << "Handle destroyed..." << std::endl;
    m_handle.destroy();
  }

  T operator()(){
    assert(m_handle != nullptr);
    m_handle.resume();
    return (m_handle.promise().m_value);
  }

  std::coroutine_handle<promise_type>   m_handle;
};

generator<int> generate_numbers(){
  std::cout << "generate_numbers starting\n";
  co_yield 10;
  std::cout << "After first co-yield\n";
  co_yield 20;
  std::cout << "After second co-yield\n";
  co_yield 30;
  std::cout << "After third co-yield\n";
  std::cout << "generate_numbers ending\n";
}

generator<int> infinite_number_stream(int start = 0) {
  auto value = start;
  for (int i = 0; ; ++i) {
    std::cout << "In infinite number stream...\n";
    co_yield value;
    ++value;
  }
}

generator<int> range(int first, int last){
  while (first != last) {
    co_yield first++;
  }
}

int main(){

  std::cout << std::boolalpha;
  auto task1 = generate_numbers();

  std::cout << "task1: " << task1() << '\n' ;
  std::cout << "task1: " << task1() << '\n' ;
  std::cout << "task1: " << task1() << '\n' ;
  std::cout << "coro done: " << task1.m_handle.done() << '\n';
  
  std::cout << "-----------\n";
  task1();
  std::cout << "coro done: " << task1.m_handle.done() << '\n';


  std::cout << "Main done!\n";
  return 0;
}
