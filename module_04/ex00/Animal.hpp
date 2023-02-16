
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>


class Animal {
private:

protected:
	std::string	_type;
public:
	Animal();
	Animal(Animal &cpy);
	Animal &operator=(Animal const &rhs);
	~Animal();

	virtual void	makeSound();
	std::string 	getType();
};


#endif
