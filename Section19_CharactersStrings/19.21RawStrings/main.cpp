#include <iostream>
#include <string>

int main(){

  /*
  std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo laundry\n\tGet groceries"};
  std::string windows_path {"D:\\sandbox\\testProject\\hello.txt"};
  std::string linux_path {"/home/username/files/hello.txt"};
  std::string hint {"\"\\\\\" escapes a backslash character like \\."};

  std::cout << "todo_list: " << std::endl;
  std::cout << todo_list << std::endl;
  std::cout << "windows_path:" << windows_path << std::endl;
  std::cout << "linux_path:" << linux_path << std::endl;
  std::cout << "hint: " << hint << std::endl;
  */

  /*
  std::string to_do_list {R"(  Clean the house
  Walk the dog
  Do laundry
  Get groceries)"};

  std::cout << "to_do_list:\n";
  std::cout << to_do_list << std::endl;
  */

  /*
  std::string to_do_list = R"(  Clean the house
  Walk the dog
  Do laundry
  Get groceries)";

  std::cout << "to_do_list:\n";
  std::cout << to_do_list << std::endl;
  */

  /*
  const char* c_string {R"(  Clean the house
  Walk the dog
  Do laundry
  Get groceries)"};

  std::cout << "to_do_list:\n";
  std::cout << c_string << std::endl;
  */

  /*
  std::string windows_path {R"(D:\sandbox\testProject\hello.txt)"};
  std::string linux_path {R"(/home/username/files/hello.txt)"};
  std::string hint {R"("\\" escapes a backslash character like \.)"};

  std::cout << "windows_path: " << windows_path << std::endl;
  std::cout << "linux_path:" << linux_path << std::endl;
  std::cout << "hint: " << hint << std::endl;
  */

  // Need for long form raw string literal notation
  std::string sentence1 {R"-(The message was "(Stay out of this!)")-"};

  std::cout << sentence1 << '\n';

  return 0;
}
