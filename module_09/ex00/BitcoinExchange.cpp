
#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() : _data() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	_val = rhs._val;
	_data = rhs._data;
	return (*this);
}

void	BitcoinExchange::inputCheck(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Error: could not open file." << std::endl;
		exit (EXIT_FAILURE);
	}
	else{
		std::string	input = argv[1];
		if (input != "input.txt"){
			std::cerr << "Error: could not open file." << std::endl;
			exit (EXIT_FAILURE);
		}
		else
			return;
	}
}

void	BitcoinExchange::addDbToMap(){
	std::ifstream fd("./data.csv");
	std::string line;

	std::getline(fd, line);
	while (std::getline(fd, line)){
		std::stringstream ss(line);
		std::string key;
		std::string val;
		getline(ss, key, ',');
		getline(ss, val, '\n');
		float f = std::stof(val);
		_data[key] = f;
	}
	fd.close();
}

void	BitcoinExchange::splitInput(char **argv){
	std::string line;
	std::ifstream fd(argv[1]);
	if (!fd.is_open()){
		std::cerr << "impossible to open file: "<< argv[1] << std::endl;
		fd.close();
		exit (EXIT_FAILURE);
	}

	std::map<std::string, float >	data;
	std::getline(fd, line);
	while (std::getline(fd, line)) {

		if (line.empty()) {
			std::cerr << "Error line is empty" << std::endl;
		}
		std::stringstream key_val(line);
		std::string key;
		std::string val;

		key_val >> key;
		key_val >> val;
		key_val >> val;

		if (dateCheck(key) == false && valueCheck(val) == false){
			checkMatch(key, val);
		}
	}
	fd.close();
}

bool	BitcoinExchange::dateCheck(std::string const &key){
	bool	err = false;
	std::stringstream date(key);
	std::tm tmd = {};
	date >> std::get_time(&tmd, "%Y-%m-%d");
	if (!date){
		std::cerr << "Error: Bad input => " << key << std::endl;
		err = true;
	}
	return (err);
}

bool	BitcoinExchange::valueCheck(std::string const &val){

	bool	err = false;
	float valtest = std::stof(val);
	if (valtest < 0 || valtest > 1000){
		if (valtest < 0){
			std::cerr << "Error: not a positive number." << std::endl;
		}
		else{
			std::cerr << "Error: too large a number." << std::endl;
		}
		err = true;
	}
	return (err);
}

void	BitcoinExchange::checkMatch(std::string const &key, std::string const &value){
	if (value.empty())
		return;

	float	val = std::stof(value);

	if (_data.find(key) != _data.end()){
		float val_DB = _data[key];
		std::cout << key << " => " << val * val_DB << std::endl;
	}
	else{
		std::map<std::string, float>::iterator it;
		it = _data.lower_bound(key);
		it--;
		std::cout << key << " => " << it->second * val << std::endl;
	}
}
