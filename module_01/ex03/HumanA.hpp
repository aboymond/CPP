
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	&n_weapon_A;
		std::string	name_A;

	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
		~HumanA();
};


