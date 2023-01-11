
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class Phonebook {

	private :
		Contact	contact[8];
		int		index;
	
	public :
		Phonebook(void);
		void	add_contact(std::string list[5]);
		int		getindex() const;
		char	*cut_name(std::string str);
		~Phonebook(void);
};

#endif