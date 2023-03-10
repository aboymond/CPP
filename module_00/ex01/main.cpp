
#include "phonebook.hpp"
#include "contact.hpp"
#include <sstream>

static int ft_stoi( std::string & s ) {
	int i;
	std::istringstream(s) >> i;
	return i;
}

int	main()
{
	Phonebook	cont;
	std::string	cmd;
	std::string	index;
	std::string	info[5];

	while (1){
		std::cout << "Faites un choix 'ADD', 'SEARCH', 'EXIT' :" << std::endl;
		std::cin >> cmd;
		std::cout << "Value " << cmd << std::endl;
		if ((cmd == "ADD" || cmd == "add") && cmd.length() == 3){
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

		else if ((cmd == "SEARCH" || cmd == "search") && cmd.length() == 6){

			if (cont.print_contact() == 1)
				continue ;
			std::cout << "Selectionnez un index : " << std::endl;
			std::cin >> index;
			if (index.length() > 1)
				std::cout << "\033[1;31mErreur :\n\tIndex non valide 	!\033[0m\n" << std::endl;
			else{
				int indexValue = ft_stoi(index);
				if (!std::all_of(index.begin(), index.end(), ::isdigit)|| indexValue >= cont.getcompt() || indexValue < 0 || indexValue > 8 || index.length() > 1) {
					std::cout << "\033[1;31mErreur :\n\tIndex non valide 	!\033[0m\n" << std::endl;
					std::cin.clear();
					std::getline(std::cin, cmd);
					continue;
				}
				else
					cont.print_tab_contact(indexValue);
			}

		}
		else if ((cmd == "EXIT" || cmd == "exit") && cmd.length() == 4){
			return (0);
		}
		else{
			std::cout << "\033[1;31mErreur :\n\tMauvais choix !\033[0m\n" << std::endl;
		}
	}
	return (0);
}

