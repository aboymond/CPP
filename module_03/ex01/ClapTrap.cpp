
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor ClapTrap called" << std::endl;
    this->_Name = "JohnDoe";
    this->_Hit = 10;
    this->_Energy = 10;
    this->_Attack_Damage = 0;
}

ClapTrap::ClapTrap(std::string Name) {
    std::cout << "Name constructor ClapTrap called" << std::endl;
    this->_Name = Name;
    this->_Hit = 10;
    this->_Energy = 10;
    this->_Attack_Damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void    ClapTrap::attack(const std::string& target){
    if (this->_Energy > 0){
        std::cout << "\033[1;34m⚔️" << this->_Name << " attacks " << target << ", causing " << this->_Attack_Damage << " points of damage ! \033[0m" << std::endl;
        this->_Energy--;
    }
    else
        std::cout << "Low energy, " << this->_Name << " can't attack ! " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->_Hit > 0 && this->_Hit > amount){
        this->_Hit = this->_Hit - amount;
        if (this->_Hit <= 0){
            std::cout << "\033[31m" << this->_Name << " loses " << amount << " life points !\033[0m" << std::endl;
            std::cout << "\033[31m" << this->_Name << " is die ! ☠\033[0m️" << std::endl;
            exit (1);
        }
        else
            std::cout << "\033[31m" << this->_Name << " loses " << amount << " life points, he has " << this->_Hit << " life points left !\033[0m" << std::endl;
    }
    else{
        std::cout << "\033[31m" << this->_Name << " loses " << amount << " life points !\033[0m" << std::endl;
        std::cout << "\033[31m" << this->_Name << " is die ! ☠️\033[0m" << std::endl;
        exit (1);
    }

}

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->_Energy > 0) {
        if (this->_Energy > 0) {
            std::cout << "\033[0;32m-- The supreme duck god restored " << amount << " of life points !\033[0m" << std::endl;
            this->_Hit += amount;
            this->_Energy--;
            std::cout << this->_Name << " now have " << this->_Hit << " life points !" << std::endl;
        }
    }
    else {
        std::cout << this->_Name << " don't have enough energy, you have " << this->_Energy << " points left !" << std::endl;
    }
}

ClapTrap::ClapTrap(ClapTrap const &cpy){
    *this = cpy;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs){
    if (this != &rhs){
        this->_Name = rhs._Name;
        this->_Hit = rhs._Hit;
        this->_Energy = rhs._Energy;
        this->_Attack_Damage = rhs._Attack_Damage;
    }
    return (*this);
}
