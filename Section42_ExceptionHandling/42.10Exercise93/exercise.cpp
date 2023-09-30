#include "exercise.h"

int divide(int a, int b){
	if(b == 0)
		throw DividebyZeroException(a,b);
	return a/b;
}

void trouble(int num){
	try
	{
		divide(num,0);
	}
	catch(const DividebyZeroException& ex)
	{
		std::cout << ex.what();
	}	
}