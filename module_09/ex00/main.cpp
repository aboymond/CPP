
#include "BitcoinExchange.hpp"

int	main(int argc, char** argv){
	BitcoinExchange test;

//	(void)argc;
	test.inputCheck(argc, argv);
	test.addDbToMap();
	test.splitInput(argv);

	return (0);
}