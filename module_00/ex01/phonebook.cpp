
#include "phonebook.hpp"
#include "contact.hpp"

void	Phonebook::add_contact(std::string list[5]){
	
	int	i = this->index;

	this->contact[i].Setfirst_name(list[0]);
	this->contact[i].Setlast_name(list[1]);
	this->contact[i].Setnickname(list[2]);
	this->contact[i].Setphone_number(list[3]);
	this->contact[i].Setdarkest_secret(list[4]);
	if (i != 8)
		this->index = i++;
}

int		Phonebook::getindex() const{
	return (this->index);
}

Phonebook::Phonebook(void){
	index = 0;
	std::cout << "constructeur !" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "destructeur !" << std::endl;
}

char	*Phonebook::cut_name(std::string str){
	char	*name;
	int		i;

	i = 0;
	name = new char[9];
	while (i < 9){
		if (str[i] == '\0'){
			while (i < 9){
				name[i] = ' ';
				i++;
			}
			name[i] = '\0';
			return (name);
		}

		name[i] = str[i];
		i++;
	}
	name[i] = '.';
	return (name);
}
