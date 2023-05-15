
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

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
#include <queue>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
private:

protected:

public:
	MutantStack() : std::stack<T>(){}
	MutantStack(MutantStack const &var) : std::stack<T>(var){}
	virtual ~MutantStack(){}

	MutantStack &operator=(MutantStack const &rhs){
		if (this != &rhs){
			std::stack<T>::operator=(rhs);
		}
		return (*this);
	}


	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){
		return (this->c.begin());
	}
	iterator end(){
		return (this->c.end());
	}
};


#endif
