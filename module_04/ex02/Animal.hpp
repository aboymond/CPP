
#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>


class AAnimal {
private:

protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(AAnimal &cpy);
	AAnimal &operator=(AAnimal const &rhs);
	virtual ~AAnimal();

	virtual void	makeSound() const = 0;
	std::string 	getType() const;
};


#endif
