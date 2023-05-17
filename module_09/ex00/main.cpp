
#include "BitcoinExchange.hpp"

int	main(int argc, char** argv){
	BitcoinExchange test;
	test.inputCheck(argc, argv);

	std::ifstream fd(static_cast<std::string>argv[1]);
	if (!fd.is_open())
}