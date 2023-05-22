
#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const $cpy) {
	*this = cpy;
}

RPN &operator=(RPN const &rhs) {
	if (this != &rhs) {}
	return (*this);
}
