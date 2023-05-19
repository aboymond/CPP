
#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() : _data() {}

BitcoinExchange::~BitcoinExchange() {}

//BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy) {
//	*this = cpy;
//}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	_val = rhs._val;
	_data = rhs._data;
	return (*this);
}

void	BitcoinExchange::inputCheck(int argc, char **argv){
	std::cout << "argc = " << argc << " argv[1] = " << argv[1] << std::endl;
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
//		std::cout << "DB val = " << val << std::endl;
		double f = std::stod(val);
//		std::cout << "f = " << f << std::endl;
		_data[key] = f;
//		std::cout << "DB = " << _data[key] << std::endl;

	}
	fd.close();
}

void	BitcoinExchange::splitInput(char **argv){
	std::string line;
	std::ifstream fd(argv[1]);
	if (!fd.is_open()){
		std::cout << "impossible to open file: "<< argv[1] << std::endl;
		fd.close();
		exit (EXIT_FAILURE);
	}

	std::map<std::string, std::vector<float> >	data;
	std::getline(fd, line);
	std::getline(fd, line);
	while (std::getline(fd, line)) {

		if (line.empty()) {
			std::cout << "Error line is empty" << std::endl;
		}
		std::stringstream key_val(line);
		std::string key;
		std::string val;

		key_val >> key;
		key_val >> val;
		key_val >> val;

//		std::cout << "key = " << key << std::endl;
//		std::cout << "val = " << val << std::endl;

		dateCheck(key);
		if (!val.empty()){
			valueCheck(val);
			_val = val;
			checkMatch(key, val);
		}
		else
			continue;
	}
	fd.close();
}

void	BitcoinExchange::dateCheck(std::string const &key){
	std::stringstream date(key);
	std::tm tmb = {};
	date >> std::get_time(&tmb, "%Y-%m-%d");
	if (date == 0){
		std::cout << "Error: Bad input => " << key << std::endl;
	}
}

void	BitcoinExchange::valueCheck(std::string const &val){

	float valtest = std::stof(val);
//	std::cout << "valtest = " << valtest << " / val = " << val << std::endl;
	if (valtest < 0.0f || valtest > 1000.0f)
		std::cout << "Error in checker = " << _val << std::endl;
}

void	BitcoinExchange::checkMatch(std::string const &key, std::string const &value){
	(void)key;
	if (value.empty())
		return;
	float	val = std::stof(value);
	(void)val;

	if (_data.find(key) != _data.end()){
		double val_DB = _data[key];
		std::cout << "TEEEEEST " << val_DB * val << std::endl;
//		std::map<std::string, std::string >::iterator it = _data.find(key);
//		std::cout << "value = " << val << "\t / _val = " << _val << std::endl;
//		std::cout << key << " => " << it->second << std::endl;
//		std::cout << key << " => " << val * val_DB << std::endl;
	}
}
