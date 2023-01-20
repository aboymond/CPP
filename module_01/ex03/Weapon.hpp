
#include <iostream>
#include <iomanip>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		const std::string		&getType(void) const; 
		void					setType(std::string w_name); 
		~Weapon();
};

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
