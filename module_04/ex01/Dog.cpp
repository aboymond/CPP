
#include "Dog.hpp"
#include "Brain.hpp"


Dog::Dog() : Animal(){
	std::cout << "Constructor ! 🐶" << std::endl;
	this->_type = "Dog 🐶";
	this->_brain = new Brain();
}

Dog::Dog (Dog const &cpy){
	*this = cpy;
}

Dog & Dog::operator=(Dog const &rhs){
	if (this != &rhs){
		this->_brain = rhs._brain;
	}
	return (*this);
}

void	Dog::makeSound() {
	std::cout << "Wooooouuf ! " << std::endl;
}

void	Dog::DogSay(int i){
	std::cout << "Dog think " << _brain->getIdeas(i) << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Destructor & brain deleted ! 🐶" << std::endl;
}
