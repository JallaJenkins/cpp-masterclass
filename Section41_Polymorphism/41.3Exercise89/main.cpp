#include <iostream>

class One {
	public : 
	One(int one ) : m_1 (one){
	}
	void print() const{
		std::cout <<"data [one:" << m_1
			<< "]" ;
	}


	protected : 
		int m_1{};
};

class Two : public One{
	public : 
	Two(int one, int two) : One(one), m_2(two) {
	}

	virtual void print() const{
		std::cout <<"data [one:" << m_1
			<< " two:" << m_2 
			<< "]" ;
	}

	protected : 
		int m_2{};
};

class Three : public Two{
	public : 
	
	Three( int one, int two, int three) : Two(one,two) , m_3(three){
	}
	

	virtual void print() const{
		std::cout <<"data [one:" << m_1
				 << " two:" << m_2 
				 << " three:" << m_3 << "]" ;
	}
	protected: 
		int m_3{};
};




inline void do_stuff(){
    //YOU WILL PUT YOUR CODE BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE

	One one(1);
	Two two(10,20);
	Three three(100,200,300);

	/*
	One* base{&one};
	base->print();
	std::cout << "\n";

	base = &two;
	base->print();
	std::cout << "\n";

	base = &three;
	base->print();
  */
	
	One& base{one};
	one.print();
	std::cout << "\n";

	Two& base2 = two;
	base2.print();
	std::cout << "\n";

	base2 = three;
	base2.print();
	

//YOU WILL PUT  YOUR CODE ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

}

int main(){
  
  do_stuff();
  

  return 0;
}
