
#include "Harl.hpp"

int	main(int argc, char **argv){

	Harl	level;
	if (argc != 2){
		std::cout << "Error with arguments !" << std::endl;
		return (1);
	}
	level.youknowharl(argv[1]);
}