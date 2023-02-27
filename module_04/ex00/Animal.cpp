
#include "Animal.hpp"

Animal::Animal() {
	std::cout << "constructor animal" << std::endl;
}
Animal::~Animal() {
	std::cout << "destructor animal" << std::endl;

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

void	Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}

std::string	Animal::getType() const {
	return (this->_type);
}