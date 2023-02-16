
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {}
WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal(WrongAnimal &cpy) {
	*this = cpy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs) {
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}