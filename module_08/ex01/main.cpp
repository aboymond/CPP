#include "Span.hpp"

int main(){
	try{
		int sz = 5;

		std::cout << "\033[4;36mTEST BASIQUE\033[0m" << std::endl;
		Span sp;
		sp = Span(sz);
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


	try{
		int sz = 7;
		std::cout << "\033[4;31mTEST TAB\033[0m" << std::endl;
		Span sp2;
		sp2 = Span(sz);
		int num[] = {98, 10, 5, 67, 83, 2, 153};
		sp2.addVectorNum(num);
		std::cout << "max = " << sp2.maxVector() << std::endl;
		std::cout << "min = " << sp2.minVector() << std::endl;
		std::cout << "delta max = " << sp2.longestSpan() << std::endl;
		std::cout << "min delta = " << sp2.shortestSpan() << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try{
		int sz = 100;
		std::cout << "\033[4;33mTEST RAND\033[0m" << std::endl;
		Span sp3;
		sp3 = Span(sz);
		srand(time(NULL));
		for (int i = 0; i < sz; i++){
			unsigned int random = rand() % 1000;
			sp3.addNumber(random);
		}
		std::cout << "max = " << sp3.maxVector() << std::endl;
		std::cout << "min = " << sp3.minVector() << std::endl;
		std::cout << "delta max = " << sp3.longestSpan() << std::endl;
		std::cout << "min delta = " << sp3.shortestSpan() << std::endl;

	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}