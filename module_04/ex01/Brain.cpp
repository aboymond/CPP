
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "im hungry";
}
Brain::~Brain() {}

Brain::Brain(Brain const &cpy) {
	*this = cpy;
}

Brain & Brain::operator=(const Brain &rhs) {
	if (this != &rhs){
		for (int i = 0; i < 100; i++ ){
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) {
	return (this->_ideas[i]);
}

