
#include "ft_replace.hpp"

int	main(int argc, char **argv){
	
	if (argc < 4){
		std::cout << "Arguments invalide" << std::endl;
		return (0);
	}

	std::string		old_file = (std::string)argv[1];
	std::string		new_file = old_file + ".replace";
	std::ifstream	fd(old_file);
	std::ofstream	output(new_file);
	std::string		buf;
	if (fd.is_open() == false){
		fd.close();
		return (0);
	}
	else{
		while (getline(fd, buf)){
			output << ft_replace((std::string)argv[2], (std::string)argv[3], buf) << std::endl;
		}
	}
	fd.close();
}
