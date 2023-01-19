#include "Zombie.hpp"

// std::string Zombie::SetName(std::string name){
// 	return (this->name = name);
// }

void	ramdomChump(std::string name){
	Zombie	zombie = Zombie(name);

	zombie.announce();
}

void	Zombie::announce(void){

	std::cout << _name << " : " << "BraiiiiiiinnnzzzZ !!!" << std::endl;
}