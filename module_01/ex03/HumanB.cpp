
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name_B(name){}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &type){
	this->_type = &type;
}