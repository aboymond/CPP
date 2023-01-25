
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &type){
	this->_type = &type;
}

void	HumanB::attack(void){

	if (this->_type == NULL)
		std::cout << _name << " attack without weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << this->_type->getType() << std::endl;
}