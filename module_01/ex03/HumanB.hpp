
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_type;
		std::string	_name_B;

	public:
		HumanB(Weapon type);
		void	setWeapon(Weapon &type); 
		void	attack(void);
		~HumanB();
};

