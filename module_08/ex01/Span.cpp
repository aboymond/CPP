
#include "Span.hpp"


Span::Span() {
	_N = 0;
}
Span::Span(unsigned int N) : _N(N) {

}

Span::~Span() {}

Span::Span(Span const &cpy) {
	*this = cpy;
}

Span &Span::operator=(Span const &rhs) {
	if (this != &rhs){
		_tab = rhs._tab;
		_N = rhs._N;
	}
	return (*this);
}

void	Span::addNumber(unsigned int num){
	if(_N > _tab.size())
		_tab.push_back(num);
	else
		throw Span::ExecutorException();
}

const char *Span::ExecutorException::what() const throw(){
	return("Span overflow");
}

void	Span::shortestSpan(){

}

void	Span::longestSpan() {

}