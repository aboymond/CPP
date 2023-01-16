#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {

	private :
		std::string	name;

	public :
		Zombie(void);
		void announce(void);
		std::string SetName(std::string name);
		~Zombie(void);
};

Zombie	*newZombie(std::string name);
void	ramdomChump(std::string name);

#endif
