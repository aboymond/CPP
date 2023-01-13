
#include "phonebook.hpp"
#include "contact.hpp"

int	main()
{
	Phonebook	cont;
	std::string	cmd;
	std::string	in;
	int			index;
	int			valide = 0;
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
			if (cont.print_contact() == 1)
				continue ;
			std::cout << "Selectionnez un index : " << std::endl;
			std::cin >> in;
			for (int i = 0; i < in.length(); i++){
				while(in[i]){
					if (std::isdigit(in[i]) == 0){
						valide = 1;
						break ;
					}
				}
			}
			if (valide == 0){
				index = std::stoi(in);
				std::cout << index << " <- index  getindex ->    " << cont.getindex() - 1 << std::endl;
				if (index < 0 || index >= cont.getindex() - 1){
					std::cout << "\033[1;31mErreur :\n\tIndex non valide !\033[0m\n" << std::endl;
					continue ;
				}
				else
					cont.print_tab_contact(index);

			}
			else
				std::cout << "\033[1;31mErreur :\n\tL'index n'est pas un integer !\033[0m\n" << std::endl;

		}
		else if (cmd == "EXIT"){
			return (0);
		}
		else{
			std::cout << "ERREUR" << std::endl;
		}
		cmd.clear();
	}
	return (0);
}