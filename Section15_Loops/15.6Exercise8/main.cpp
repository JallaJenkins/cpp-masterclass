    #include <iostream>
    #include <vector>
     
    int main(int argc, char **argv)
    {
        std::vector<double> unit_price {10.4,21.5,14.0,15.2,7.9};
        std::vector<double> number_of_items{60,20,10,30,20,50};
        //At this moment, you don't need to worry about the code Above, just think of it as a way to set up 
        // our two collections in C++

        //Please try to change the indexes within the [ ] in code below and see which data prints out 

        for (size_t price: unit_price) {
          std::cout << "price : " <<  unit_price[item] << std::endl;
          std::cout << "how many items : " << number_of_items[item] << std::endl;
        }
        return 0;
    }
     
