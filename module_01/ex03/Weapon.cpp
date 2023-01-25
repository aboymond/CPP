
#include "Weapon.hpp"

const std::string		&Weapon::getType(void) const{
	return this->_type;
}

void			Weapon::setType(std::string w_name){
	this->_type = w_name;
}

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}