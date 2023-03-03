
#include "Animal.hpp"

Animal::Animal() {}
Animal::~Animal() {
	std::cout << "Destructor Animal" << std::endl;
}

Animal::Animal(Animal &cpy) {
	*this = cpy;
}

Animal & Animal::operator=(const Animal &rhs) {
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

void	Animal::makeSound() {
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType() const {
	return (this->_type);
}