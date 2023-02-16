#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(){

    ClapTrap    Clap("LeQuent");
	ScavTrap	Scav("Alex");
	FragTrap	Frag("Cool guy");
    Clap.attack("a super strong plastic duck");
    Scav.attack("a super strong plastic duck from behind");
    Frag.attack("a super strong plastic duck");
    Clap.takeDamage(9);
    Clap.beRepaired(5);
    Scav.takeDamage(35);
    Scav.beRepaired(12);
	Scav.guardGate();
    Frag.takeDamage(18);
    Frag.beRepaired(2);
	Frag.highFivesGuys();


}
