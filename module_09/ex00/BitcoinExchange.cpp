
#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

//BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy) {
//	*this = cpy;
//}

//BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {}

void	BitcoinExchange::inputCheck(int argc, char **argv){
	if (argc != 2){
		std::cout << "Error: could not open file." << std::endl;
		exit (EXIT_FAILURE);
	}
	else{
		std::string	input = argv[1];
		if (input != "input.txt"){
			std::cout << "Error: could not open file." << std::endl;
			exit (EXIT_FAILURE);
		}
		else
			return;
	}
}
