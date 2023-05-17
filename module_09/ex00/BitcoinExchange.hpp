
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <exception>
#include <list>


class BitcoinExchange {
private:

protected:

public:
	BitcoinExchange();
	//BitcoinExchange(BitcoinExchange &cpy);
	//BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();

	void	inputCheck(int argc, char **argv);
};


#endif
