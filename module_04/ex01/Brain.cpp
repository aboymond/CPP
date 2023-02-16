
#include "Brain.hpp"

Brain::Brain() {}
Brain::~Brain() {}

Brain::Brain(Brain &cpy) {
	*this = cpy;
}

Brain & Brain::operator=(const Brain &rhs) {
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}
