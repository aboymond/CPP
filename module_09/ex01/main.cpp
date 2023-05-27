
#include "RPN.hpp"

int main (int argc, char **argv) {
	try{
		if (argc != 2) {
			std::cerr << "Error: Bad input" << std::endl;
			return (EXIT_FAILURE);
		}
		RPN polish(argv[1]);
		polish.polishNotation();
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}