
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(FragTrap &cpy);
	FragTrap & operator=(FragTrap const &rhs);
	void	highFivesGuys();
	~FragTrap();
};


#endif
