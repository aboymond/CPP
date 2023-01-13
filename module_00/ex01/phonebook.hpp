
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>

class Phonebook {

	private :
		Contact	contact[8];
		int		index;
		int		compt;
	
	public :
		Phonebook(void);
		void	add_contact(std::string list[5]);
		int		getindex() const;
		int		print_contact();
		void	print_tab_contact(int index);

		~Phonebook(void);
};

#endif