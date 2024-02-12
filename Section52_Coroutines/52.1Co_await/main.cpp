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

CoroType do_work() {
  std::cout << "Doing first thing...\n";
  co_await std::suspend_always();
  std::cout << "Doing second thing...\n";
  co_await std::suspend_always();
  std::cout << "Doing third thing...\n";
}

int main(){

  // Init coroutine and initial suspend
  // Note if we set initial suspend to suspend_never in the class then the init will run the coroutine until the first explicit suspent
  auto task = do_work();
  // auto task2 = do_work();

  // Resume
  task.m_handle();
  // task.m_handle();
  std::cout << std::boolalpha;
  std::cout << "coro done: " << task.m_handle.done() << '\n';

  // Resume
  task.m_handle.resume();
  std::cout << "coro done: " << task.m_handle.done() << '\n';

  // Resume
  task.m_handle.resume();
  std::cout << "coro done: " << task.m_handle.done() << '\n';

  std::cout << "------------------------\n";

  // Resume after completion REALLY BAD
  // task.m_handle.resume();   // Crash!

  std::cout << "Done!\n";
  return 0;
}
