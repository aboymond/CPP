
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
private:

protected:

public:
	Dog();
	Dog(Dog &cpy);
	Dog &operator=(Dog const &rhs);
	~Dog();

	virtual void	makeSound() const;
};


#endif
