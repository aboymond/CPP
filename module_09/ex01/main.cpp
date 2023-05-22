
#include "RPN.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Bad input" << std::endl;
		return (EXIT_FAILURE);
	}
	RPN polish(argv[1]);
	polish.polishNotation();
	return (0);
}