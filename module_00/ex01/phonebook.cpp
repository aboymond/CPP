
#include "phonebook.hpp"
#include "contact.hpp"

void	Phonebook::add_contact(std::string list[5]){
	if (this->index == 8)
		this->index = 0;
	std::cout << "Mon index" << this->index << std::endl;
	this->contact[this->index].Setfirst_name(list[0]);
	this->contact[this->index].Setlast_name(list[1]);
	this->contact[this->index].Setnickname(list[2]);
	this->contact[this->index].Setphone_number(list[3]);
	this->contact[this->index].Setdarkest_secret(list[4]);
	if (this->index < 8)
		this->index++;
	if (this->compt < 8)
		this->compt++;
}

int		Phonebook::getindex() const{
	return (this->index);
}

int		Phonebook::getcompt() const{
	return (this->compt);
}

Phonebook::Phonebook(void){
	this->index = 0;
	this->compt = 0;
	//std::cout << "constructeur !" << std::endl;
}

Phonebook::~Phonebook(void)
{
	return;
}

int		Phonebook::print_contact(){

	Phonebook	cont;
	std::string	str;

	if (this->compt == 0){
		std::cout << "Pas de contact" << std::endl;
		return (1);
	}
	

	std::cout << "\033[1;31m---------------------------------------------\033[0m" << std::endl;
	for (int i = 0; i < this->compt; i++){

		std::cout << "\033[1;31m|\033[0m";
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i;
		std::cout << "\033[1;31m|\033[0m";

		str = this->contact[i].Getfirst_name();
		if (str.length() > 9){
			str = str.substr(0, 9).append(".");
			std::cout << str;
		}
		else{

			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << str;
		}
		std::cout << "\033[1;31m|\033[0m";

		str = this->contact[i].Getlast_name();
		if (str.length() > 9){
			str = str.substr(0, 9).append(".");
			std::cout << str;
		}
		else{

			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << str;
		}
		std::cout << "\033[1;31m|\033[0m";

		str = this->contact[i].Getnickname();
		if (str.length() > 9){
			str = str.substr(0, 9).append(".");
			std::cout << str;
		}
		else{

			std::cout << std::setfill(' ') << std::setw(10);
			std::cout << str;
		}
		std::cout << "\033[1;31m|\033[0m";
		std::cout << "\n" << "\033[1;31m---------------------------------------------\033[0m" << std::endl;
	}
	return (0);
}

void	Phonebook::print_tab_contact(int index){

	std::cout << "First name : " << this->contact[index].Getfirst_name() << std::endl;
	std::cout << "Last name : " << this->contact[index].Getlast_name() << std::endl;
	std::cout << "Nickname : " << this->contact[index].Getnickname() << std::endl;
	std::cout << "Phone number : " << this->contact[index].Getphone_number() << std::endl;
	std::cout << "Darkest secret : " << this->contact[index].Getdarkest_secret() << std::endl;
}