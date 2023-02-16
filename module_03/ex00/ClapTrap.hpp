
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

private:
    std::string _Name;
    int         _Hit;
    int         _Energy;
    int         _Attack_Damage;

public:
    ClapTrap();

    ClapTrap(std::string Name);
    ClapTrap(ClapTrap const &cpy);
    ClapTrap & operator=(ClapTrap const &rhs);
    ~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};

#endif