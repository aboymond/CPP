
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat {
private:

protected:

public:
	Cat();
	Cat(Cat &cpy);
	Cat &operator=(Cat const &rhs);
	virtual void	makeSound();
	~Cat();
};


#endif
