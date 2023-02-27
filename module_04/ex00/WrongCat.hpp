
#ifndef	WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
private:

protected:

public:
	WrongCat();
	WrongCat(WrongCat &cpy);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();

	void	makeSound() const;
};

#endif