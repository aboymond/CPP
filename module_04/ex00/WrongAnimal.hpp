#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {
private:

protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &cpy);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	~WrongAnimal();

	void	makeSound() const;
	std::string 	getType() const;
};


#endif