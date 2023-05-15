
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

int 	Span::maxVector(){
	int max = INT_MIN;
	for (int i = 0; _tab[i]; i++){
		if (max < _tab[i])
			max = _tab[i];
	}
	return (max);
}

int 	Span::minVector(){
	int min = INT_MAX;
	if (!_vec.empty()){
		for (int i = 0;_vec[i]; i++){
			if (min > _vec[i])
				min = _vec[i];
		}
	}
	else{
		for (int i = 0;_tab[i]; i++){
			if (min > _tab[i])
				min = _tab[i];
		}
	}
	return (min);
}

int	Span::shortestSpan(){
	int tmp_i = 0;
	int tmp_tab = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	while (i < _tab.size()){
		j = i + 1;
		while (j < _tab.size()){
			tmp_i = 0;
			tmp_tab = _tab[i];
			if (tmp_tab < _tab[j]){
				while (tmp_tab < _tab[j]){
					tmp_tab++;
					tmp_i++;
				}
			}
			else if (tmp_tab > _tab[j]){
				while (tmp_tab > _tab[j]){
					tmp_tab--;
					tmp_i++;
				}
			}
			j++;
			_vec.push_back(tmp_i);
		}
		i++;
	}
	int vec = minVector();
	return (vec);
}

int	Span::longestSpan() {
	int max = maxVector();
	int min = minVector();
	return (max - min);
}