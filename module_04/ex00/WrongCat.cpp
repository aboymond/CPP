#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal(){
	this->_type = "WrongCat 🙀";
}

void	WrongCat::makeSound() const{
	std::cout << "SHBBoooooooooaaaaGGgaaaaglllleeee ! " << std::endl;
}

WrongCat::~WrongCat() {}