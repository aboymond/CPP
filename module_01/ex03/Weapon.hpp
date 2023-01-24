
#include <iostream>
#include <iomanip>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		const std::string		getType(void) const; 
		void					setType(std::string w_name); 
		~Weapon();
};

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}
