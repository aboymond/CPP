
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _type(weapon), _name(name) {}


HumanA::~HumanA()
{
}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << this->_type.getType() << std::endl;
}