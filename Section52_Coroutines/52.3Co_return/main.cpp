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

    int m_value;  

    std::suspend_always yield_value(int val) {   // Return method for co_yield
      m_value = val;
      return {};
    }

    
    void return_value(int val){   // Return method for co_return with return value
      m_value = val;
    }
    

    // void return_void(){};         // Return method for void co_return
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

CoroType do_work() {
  std::cout << "Starting coroutine...\n";
  co_yield 1;
  co_yield 2;
  co_yield 3;
  // co_return;
  co_return 4;
}

int main(){

  std::cout << std::boolalpha;
  auto task = do_work();

  task.m_handle();  // Resume coroutine and pause at next suspension point
  std::cout << "value: " << task.m_handle.promise().m_value << '\n';

  task.m_handle();  // Resume coroutine and pause at next suspension point
  std::cout << "value: " << task.m_handle.promise().m_value << '\n';
  std::cout << "coro done: " << task.m_handle.done() << '\n';

  task.m_handle();  // Resume coroutine and pause at next suspension point
  std::cout << "value: " << task.m_handle.promise().m_value << '\n';
  std::cout << "coro done: " << task.m_handle.done() << '\n';
  
  task.m_handle();  // Resume coroutine and pause at next suspension point
  std::cout << "value: " << task.m_handle.promise().m_value << '\n';
  std::cout << "coro done: " << task.m_handle.done() << '\n';

  std::cout << "Done!\n";
  return 0;
}
