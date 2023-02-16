
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog {
private:

protected:

public:
	Dog();
	Dog(Dog &cpy);
	Dog &operator=(Dog const &rhs);
	virtual void	makeSound();
	~Dog();
};


#endif
