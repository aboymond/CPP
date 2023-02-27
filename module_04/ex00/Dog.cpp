
#include "Dog.hpp"


Dog::Dog() : Animal(){
	std::cout << "constructor dog" << std::endl;
	this->_type = "Dog 🐶";
}

void	Dog::makeSound() const{
	std::cout << "Wooooouuf ! " << std::endl;
}

Dog::~Dog() {
	std::cout << "destructor dog" << std::endl;
}
