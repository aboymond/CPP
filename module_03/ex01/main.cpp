#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(){

    ClapTrap    Clap("LeQuent");
	ScavTrap	Scav("Alex");
    Clap.attack("a super strong plastic duck");
    Scav.attack("a super strong plastic duck from behind");
    Clap.takeDamage(9);
    Clap.beRepaired(5);
    Scav.takeDamage(35);
    Scav.beRepaired(12);
	Scav.guardGate();

}
