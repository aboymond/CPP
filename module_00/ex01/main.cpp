
#include "phonebook.hpp"
#include "contact.hpp"

int	main()
{
	Phonebook	cont;
	std::string	cmd;
	int			index;
	std::string	info[5];

	while (1){
		std::cout << "Faites un choix 'ADD', 'SEARCH', 'EXIT' :" << std::endl;
		std::cin >> cmd;

		if (cmd == "ADD"){
		std::cout << "Entrez vos informations :" << std::endl;
		std::cout << "Entrez votre Prenom :" << std::endl;
		std::cin >> info[0];
		std::cout << "Entrez votre Nom :" << std::endl;
		std::cin >> info[1];
		std::cout << "Entrez votre nickname :" << std::endl;
		std::cin >> info[2];
		std::cout << "Entrez votre Numero :" << std::endl;
		std::cin >> info[3];
		std::cout << "Entrez votre Secret :" << std::endl;
		std::cin >> info[4];
		cont.add_contact(info);
		}

		else if (cmd == "SEARCH"){
			//for (info != NULL){
			cont.print_contact();
			std::cout << "Selectionnez un index : " << std::endl;
			std::cin >> index;
			if (std::isalnum(index) || index > (cont.getindex() - 1) || index < 0)
				std::cout << "\033[1;31mErreur :\n\tMauvais index !\033[0m\n" << std::endl;
			else
				cont.print_tab_contact(index);
		}

		else if (cmd == "EXIT"){
			return (0);
		}
		else{
			std::cout << "ERREUR" << std::endl;
		}
	}
	return (0);
}