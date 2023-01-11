
#include "phonebook.hpp"
#include "contact.hpp"

int	main()
{
	Phonebook	test;
	std::string	cmd;
	std::string	info[5];

	while (42){
		std::cout << "Faites un choix 'ADD', 'SEARCH', 'EXIT' :" << std::endl;
		std::cin >> cmd;

		if (cmd == "ADD"){
		std::cout << "Entrez vos informations :" << std::endl;
		std::cout << "Entrez votre Prenom :" << std::endl;
		std::cin >> info[0];
		std::cout << "Entrez votre Nom :" << std::endl;
		std::cin >> info[1];
		std::cout << "Entrez votre Numero :" << std::endl;
		std::cin >> info[2];
		std::cout << "Entrez votre nickname :" << std::endl;
		std::cin >> info[3];
		std::cout << "Entrez votre Secret :" << std::endl;
		std::cin >> info[4];
		test.add_contact(info);
		}

		else if (cmd == "SEARCH"){
			//for (info != NULL){

				std::cout << "\033[1;31m---------------------------------------------------\033[0m" << std::endl;
				std::cout << "\033[1;31m|\033[0m" << "   " << test.getindex();
				for(int i = 0; i < 5; i++)
					std::cout << " ";
				std::cout << "\033[1;31m|\033[0m";
				for (int i = 0; i < 4; i++)
					std::cout << test.cut_name(info[i]) << "\033[1;31m|\033[0m";
				std::cout << "\n" << "\033[1;31m---------------------------------------------------\033[0m" << std::endl;
			//}
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