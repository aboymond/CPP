
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	Brain*	_brain;
protected:

public:
	Cat();
	Cat(Cat &cpy);
	Cat &operator=(Cat const &rhs);
	~Cat();
	
	virtual void	makeSound();
	void			SetSay(std::string const say);
	std::string 	GetSay() const;
};


#endif
