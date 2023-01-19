
#include "Zombie.hpp"

Zombie::Zombie( std::string name ){
	_name = name;
}

Zombie::~Zombie(void){
	std::cout << "destructoooooooor\n";
}