
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

private:
	bool	GateKeeper;
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap &cpy);
    ScavTrap & operator=(ScavTrap const &rhs);
    void    guardGate();
    ~ScavTrap();

};


#endif
