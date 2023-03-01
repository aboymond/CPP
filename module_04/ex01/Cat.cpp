
#include "Cat.hpp"
#include "Brain.hpp"


Cat::Cat() : Animal(){
	std::cout << "Constructor ! 🐱" << std::endl;
	this->_type = "Cat 🐱";
	this->_brain = new Brain;
}

Cat::Cat (Cat const &cpy){
	*this = cpy;
}

Cat & Cat::operator=(Cat const &rhs){
	if (this != &rhs){
		this->_brain = rhs._brain;
	}
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "Miaou ! " << std::endl;
}

void	Cat::CatSay(int i){
	std::cout << "Cat think " << _brain->getIdeas(i) << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Destructor & brain deleted ! 🐱" << std::endl;
}
