
#include "Dog.hpp"


Dog::Dog() : Animal(){
	this->_type = "Dog 🐶";
}

void	Dog::makeSound() {
	std::cout << "Wooooouuf ! " << std::endl;
}

Dog::~Dog() {}
