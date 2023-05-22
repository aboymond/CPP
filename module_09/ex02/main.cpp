
#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2){
		std::cout << "Error: Bad input" << std::endl;
		exit (EXIT_FAILURE);
	}
	for (int i = 1; argv[i]; i++){
		if (std::stoi(argv[i]) < 0){
			std::cout << "Error: Not a positive integer" << std::endl;
			exit (EXIT_FAILURE);
		}
	}
}