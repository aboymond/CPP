
#include "Cat.hpp"


Cat::Cat() : Animal(){
	this->_type = "Cat 🐱";
}

void	Cat::makeSound() {
	std::cout << "Miaou ! " << std::endl;
}

Cat::~Cat() {}
