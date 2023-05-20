
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <exception>
#include <list>
#include <cstdlib>
#include <map>


class BitcoinExchange {
private:
	std::string _val;
	std::map<std::string, float >	_data;
protected:

public:
	BitcoinExchange();

	//BitcoinExchange(BitcoinExchange &cpy);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange();

	void	addDbToMap();
	void	inputCheck(int argc, char **argv);
	void	splitInput(char **argv);
	bool	dateCheck(std::string const &key);
	bool	valueCheck(std::string const &val);
	void	checkMatch(std::string const &key, std::string const &value);
};


#endif
