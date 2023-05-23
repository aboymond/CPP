
#include "RPN.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Bad input" << std::endl;
		return (EXIT_FAILURE);
	}
	try{
		RPN polish(argv[1]);
		polish.polishNotation();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}