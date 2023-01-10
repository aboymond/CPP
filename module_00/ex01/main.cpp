
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

		}

		else if (cmd == "SEARCH"){
			std::cout << "_____________________________________________" << std::endl;
			std::cout << "|" << test.getindex();
			for (int i = 0; i < 8; i++)
				std::cout << " ";
			std::cout << "|";
			for (int i = 0; i < 9; i++)
				std::cout << ;
			std::cout << "|          |          |          |          |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
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