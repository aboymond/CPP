#include "Span.hpp"

int main(){
	try{
		Span sp;
		sp = Span(2);
		sp.addNumber(1);
		sp.addNumber(10);
		sp.addNumber(5);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}