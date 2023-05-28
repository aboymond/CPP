
#include "RPN.hpp"

int main (int argc, char **argv) {
	try{
		if (argc != 2) {
			std::cerr << "Error: Bad input" << std::endl;
			return (EXIT_FAILURE);
		}
		std::string arg = argv[1];
		int j = 0;
		for (int i = 0; argv[1][i]; i++){
			if (argv[1][i] == ' ')
				j++;
		}
		if (arg.length() - j == 1)
			throw std::runtime_error("Error: Minimum 2 integers in the stack.");
		RPN polish(argv[1]);
		polish.polishNotation();
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}