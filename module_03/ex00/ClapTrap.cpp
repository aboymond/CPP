
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
}

ClapTrap::ClapTrap(std::string Name) {
    this->_Name = Name;
    this->_Hit = 10;
    this->_Backup_Hit = _Hit;
    this->_Energy = 10;
    this->_Attack_Damage = 0;
}

ClapTrap::~ClapTrap() {

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
    if (this->_Energy >= amount) {
        if (this->_Hit < this->_Backup_Hit && this->_Energy > 0) {
            std::cout << "\033[0;32m-- The supreme duck god restored " << amount << " of life points !\033[0m" << std::endl;
            this->_Hit += amount;
            this->_Energy -= amount;
            std::cout << "You now have " << this->_Hit << " life points !" << std::endl;
        }
    }
    else {
        std::cout << "You don't have enough energy, you have " << this->_Energy << " points left !" << std::endl;
    }
}