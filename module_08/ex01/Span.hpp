
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <exception>
#include <list>


class Span {
private:
	unsigned int _N;
	std::vector<int> _tab;
	std::vector<int> _vec;
protected:

public:
	Span();
	Span(unsigned int N);
	Span(Span const &cpy);
	Span &operator=(Span const &rhs);
	~Span();

	void	addNumber(unsigned int num);
	void	addVectorNum(int *num);
	int 	shortestSpan();
	int 	longestSpan();

	int 	maxVector();
	int 	minVector();

	class	ExecutorException : public std::exception {
	public :
		virtual const char* what() const throw();
	};

};


#endif
