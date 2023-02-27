
#include "Cat.hpp"
#include "Brain.hpp"


Cat::Cat() : Animal(){
	std::cout << "Constructor ! 🐱" << std::endl;
	this->_type = "Cat 🐱";
}

void	Cat::makeSound() {
	std::cout << "Miaou ! " << std::endl;
}

Cat::~Cat() {
	std::cout << "Destructor ! 🐱" << std::endl;
}
