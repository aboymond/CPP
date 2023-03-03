
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
private:
	Brain*	_brain;
protected:

public:
	Cat();
	Cat(Cat const &cpy);
	Cat &operator=(Cat const &rhs);
	~Cat();
	
	virtual void	makeSound() const;
	void			CatSay(int i);
};


#endif
