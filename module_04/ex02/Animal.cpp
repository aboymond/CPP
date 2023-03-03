
#include "Animal.hpp"

AAnimal::AAnimal() {
	std::cout << "Constructor Animal" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "Destructor Animal" << std::endl;
}

AAnimal::AAnimal(AAnimal &cpy) {
	*this = cpy;
}

AAnimal & AAnimal::operator=(const AAnimal &rhs) {
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	AAnimal::getType() const {
	return (this->_type);
}