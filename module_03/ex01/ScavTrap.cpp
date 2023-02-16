
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default constructor ScavTrap called" << std::endl;
	this->_Name = "NoName";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
	this->GateKeeper = false;

}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name){
	std::cout << "Name constructor ScavTrap called" << std::endl;
	this->_Name = Name;
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
	this->GateKeeper = false;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::guardGate() {
	if (this->GateKeeper == false){
		this->GateKeeper = true;
		std::cout << "Gate Keeper enable !" << std::endl;
	}
	else{
		this->GateKeeper = false;
		std::cout << "Gate Keeper disable !" << std::endl;
	}

}
