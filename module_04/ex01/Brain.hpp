#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
private:

protected:
	std::string	_ideas[100];

public:
	Brain();
	Brain(Brain const &cpy);
	Brain &operator=(Brain const &rhs);
	~Brain();

	std::string getIdeas(int i);
	void		setIdeas(std::string str);

};

#endif