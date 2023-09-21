    #include <iostream>
     
    void trouble(){
        try{
        throw 1;
        }catch(double ex){
            std::cout << "Handling exception from trouble()" << std::endl;
        }
    }
     
    void one(){
        std::cout << "1 starting" << std::endl;
        trouble();
        std::cout << "1 ending" << std::endl;
    }
    void two(){
        std::cout << "2 starting" << std::endl;
        try
        {
            one();
        }
        catch(int ex)
        {
            std::cout << "Handling exception from trouble()" << std::endl;
        }
        
        std::cout << "2 ending" << std::endl;
    }
    void three(){
        std::cout << "3 starting" << std::endl;
        two();
        std::cout << "3 ending" << std::endl;
    }
     
    void do_stuff(){
        three();
    }
     
     
    int main()
    {
        do_stuff();
        return 0;
    }
