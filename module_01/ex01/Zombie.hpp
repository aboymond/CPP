#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {

	private :
		std::string	_name;

	public :
		Zombie(void);
		void announce(int i);
		void SetName(std::string name);
		~Zombie(void);
};

Zombie	*ZombieHorde(int N, std::string name);

#endif
