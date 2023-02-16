
#include "Animal.hpp"

Animal::Animal() {}
Animal::~Animal() {}

Animal::Animal(Animal const &cpy) {
	*this = cpy;
}

Animal & Animal::operator=(const Animal &rhs) {
	if (this != &rhs){
		this->_type = rhs._type;
	}
}
