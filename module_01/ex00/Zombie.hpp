#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {

	private :
		std::string	_name;

	public :
		Zombie(std::string name);
		void announce(void);
		std::string SetName(std::string name);
		~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	ramdomChump(std::string name);

#endif
