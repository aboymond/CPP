
#include "Cat.hpp"


Cat::Cat() : Animal(){
	std::cout << "constructor cat" << std::endl;
	this->_type = "Cat 🐱";
}

void	Cat::makeSound() const{
	std::cout << "Miaou ! " << std::endl;
}

Cat::~Cat() {
	std::cout << "destructor cat" << std::endl;
}
