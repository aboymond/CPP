
#include "phonebook.hpp"
#include "contact.hpp"

int	main()
{
	Phonebook	cont;
	std::string	cmd;
	int			index;
	int			valide = 0;
	std::string	info[5];

	while (1){
		std::cout << "Faites un choix 'ADD', 'SEARCH', 'EXIT' :" << std::endl;
		std::cin >> cmd;
		
		if (cmd == "ADD" || cmd.length() == 3){
		std::cout << "Entrez vos informations :" << std::endl;
		std::cin.ignore();
		std::cout << "Entrez votre Prenom :" << std::endl;
		std::getline(std::cin, info[0]);
		std::cout << "Entrez votre Nom :" << std::endl;
		std::getline(std::cin, info[1]);
		std::cout << "Entrez votre nickname :" << std::endl;
		std::getline(std::cin, info[2]);
		std::cout << "Entrez votre Numero :" << std::endl;
		std::getline(std::cin, info[3]);
		std::cout << "Entrez votre Secret :" << std::endl;
		std::getline(std::cin, info[4]);
		if (info[0].empty() || info[1].empty() || info[2].empty() || info[3].empty() || info[4].empty()){
			std::cerr << "Informations vide !" << std::endl;
			continue ;
		}
		cont.add_contact(info);
		}

		else if (cmd == "SEARCH"){

			if (cont.print_contact() == 1)
				continue ;
			std::cout << "Selectionnez un index : " << std::endl;
			std::cin >> index;
			std::cout << index << " <- index  getindex ->    " << cont.getindex() - 1 << std::endl;
			if (std::cin.fail() || index < 0 || index > 7){
				std::cout << "\033[1;31mErreur :\n\tIndex non valide !\033[0m\n" << std::endl;
				std::cin.clear();
				std::getline(std::cin, cmd);
				continue ;
			}
			else
				cont.print_tab_contact(index);
		}
		else if (cmd == "EXIT"){
			return (0);
		}
		else{
			std::cout << "ERREUR" << std::endl;
		}
		// cmd.clear();
		// std::cout << "clear \n";
	}
	return (0);
}