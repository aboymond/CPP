#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain : public Animal {
private:

protected:
	std::string	_ideas[100];
public:
	Brain();
	Brain(Brain &cpy);
	Brain &operator=(Brain const &rhs);
	~Brain();
};


#endif