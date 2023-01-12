
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.hpp"
#include <iostream>

class Contact{

	private :
		std::string _last_name;
		std::string _first_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	
	public :
		Contact(void);
		void	Setlast_name(std::string last_name);
		void	Setfirst_name(std::string first_name);
		void	Setnickname(std::string nickname);
		void	Setphone_number(std::string phone_number);
		void	Setdarkest_secret(std::string darkest_secret);
		std::string	Getlast_name();
		std::string	Getfirst_name();
		std::string	Getnickname();
		std::string	Getphone_number();
		std::string	Getdarkest_secret();
		
		~Contact(void);
};


#endif
