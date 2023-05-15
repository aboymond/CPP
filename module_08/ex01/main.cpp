#include "Span.hpp"

int main(){
	try{
		Span sp;
		sp = Span(5);
		sp.addNumber(12);
		sp.addNumber(60);
		sp.addNumber(5);
		sp.addNumber(38);
		sp.addNumber(25);
		std::cout << "max = " << sp.maxVector() << std::endl;
		std::cout << "min = " << sp.minVector() << std::endl;
		std::cout << "delta max = " << sp.longestSpan() << std::endl;
		std::cout << "min delta = " << sp.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}