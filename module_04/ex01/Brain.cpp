
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
	_ideas[0] = "im hungry";
}
Brain::~Brain() {}

Brain::Brain(Brain &cpy) {
	*this = cpy;
}

Brain & Brain::operator=(const Brain &rhs) {
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) {
	return (this->_ideas[i]);
}



