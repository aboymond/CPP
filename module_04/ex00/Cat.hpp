
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:

protected:

public:
	Cat();
	Cat(Cat &cpy);
	Cat &operator=(Cat const &rhs);
	~Cat();
	
	virtual void	makeSound() const;
};


#endif
