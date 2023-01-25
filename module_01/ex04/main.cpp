
#include "ft_replace.hpp"

int	main(int argc, char **argv){
	
	if (argc < 4){
		std::cout << "Arguments invalide" << std::endl;
		return (0);
	}

	std::ifstream fd(argv[1]);
	std::string	repl;
	repl = (std::string)argv[1] + ".replace";
	std::ofstream output(repl);
	std::string	tmp;
	while (getline(fd, tmp)){

		std::cout << tmp << std::endl;
		tmp = ft_replace((std::string)argv[2], (std::string)argv[3], tmp);
		output << tmp << std::endl;
	}
}