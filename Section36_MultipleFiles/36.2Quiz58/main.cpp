    #include <iostream>
    #include <string_view>
    

    namespace {
    void greet( std::string_view last_name, std::string_view first_name);
    }
    int main()
    {
        greet("John","Snow");
        return 0;
    }
     
    namespace  {
        void greet( std::string_view last_name, std::string_view first_name){
            std::cout << "Hello " << last_name << " " << first_name << std::endl;
        }
    }