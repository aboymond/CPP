
#include "phonebook.hpp"

Contact::Contact(void)
{
	//std::cout << "cont constructeur !" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "cont destructeur !" << std::endl;
}

void	Contact::Setlast_name(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::Setfirst_name(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::Setnickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::Setphone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::Setdarkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::Getlast_name(){
	return (this->_last_name);
}

std::string	Contact::Getfirst_name(){
	return (this->_first_name);
}

std::string	Contact::Getnickname(){
	return (this->_nickname);
}

std::string	Contact::Getphone_number(){
	return (this->_phone_number);
}

std::string	Contact::Getdarkest_secret(){
	return (this->_darkest_secret);
}