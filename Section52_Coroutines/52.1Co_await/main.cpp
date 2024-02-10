#include <iostream>
#include <coroutine>

struct CoroType {
  struct promise_type { 
    CoroType get_return_object() { return CoroType(this); }    
    std::suspend_always initial_suspend() { return {}; }        
    std::suspend_always final_suspend() noexcept{ return {}; }
  
    void unhandled_exception() noexcept
    {
      std::rethrow_exception(std::current_exception());
    }
    void return_void(){};
    
  };
  CoroType(promise_type* p)
    : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}
  ~CoroType()
    {
      std::cout << "Handle destroyed..." << std::endl;
      m_handle.destroy();
    }
  std::coroutine_handle<promise_type>   m_handle;
};

int main(){

  return 0;
}
