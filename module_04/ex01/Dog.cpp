
#include "Dog.hpp"
#include "Brain.hpp"


Dog::Dog() : Animal(){
	std::cout << "Constructor ! 🐶" << std::endl;
	this->_type = "Dog 🐶";
	this->_brain = new Brain();
}

void	Dog::makeSound() {
	std::cout << "Wooooouuf ! " << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Destructor ! 🐶" << std::endl;
}

void	Dog::SetSay() {
//	this->_brain->_ideas = say;
	std::cout << "dog say" << this->_brain->getIdeas(0);
}

//std::string 	GetSay() const;