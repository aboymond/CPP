
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain*	_brain;
protected:

public:
	Dog();
	Dog(Dog const &cpy);
	Dog &operator=(Dog const &rhs);
	~Dog();

	virtual void	makeSound();
	void			DogSay(int i);
	void			setThink(std::string str);
};


#endif