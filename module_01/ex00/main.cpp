#include "Zombie.hpp"

int	main(){

	Zombie *zombie;
	zombie = newZombie("boris");
	zombie->announce();
	ramdomChump("Jean-miche-miche");
	delete zombie;

}
