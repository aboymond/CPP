
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name) ,_type(weapon){}


HumanA::~HumanA()
{
}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << this->_type.getType() << std::endl;
}