
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default constructor FragTrap called" << std::endl;
	this->_Name = "JohNoNameDoe";
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack_Damage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name){
	std::cout << "Name constructor FragTrap called" << std::endl;
	this->_Name = Name;
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack_Damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << this->_Name << " want a high five ! 🖐" << std::endl;
	std::cout << "But.. he takes a wind 💨!" << std::endl;

}
