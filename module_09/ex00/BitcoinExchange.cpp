
#include "BitcoinExchange.hpp"

static float ft_stof( std::string const & s ) {
	float i;
	std::stringstream	extract;
	extract << s;
	extract >> i;
	return i;
}

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
		std::string txt_csv = argv[1];
		size_t point = txt_csv.find_last_of(".");
		if (point == std::string::npos){
			std::cout << "Error: Extension of file" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::string ext = txt_csv.substr(point + 1);
		if (ext != "txt" && ext != "csv"){
			std::cout << "Error: Extension of file" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::string	line;
		std::ifstream input(argv[1]);
		if (!input.is_open()){
			std::cerr << "Error: could not open file." << std::endl;
			input.close();
			exit (EXIT_FAILURE);
		}
		else if (input.peek() == std::ifstream::traits_type::eof()) {
			std::cerr << "Error: File is empty." << std::endl;
			input.close();
			exit(EXIT_FAILURE);
		}
		else
			return;
		input.close();
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
		float f = ft_stof(val);
		_data[key] = f;
	}
	fd.close();
}

void	BitcoinExchange::splitInput(char **argv){
	std::string line;
	std::ifstream fd(argv[1]);
	if (!fd.is_open()){
		std::cerr << "Error: impossible to open file: "<< argv[1] << std::endl;
		fd.close();
		exit (EXIT_FAILURE);
	}

	std::map<std::string, float >	data;
	std::getline(fd, line);
	while (std::getline(fd, line)) {

		if (line.empty()) {
			std::cerr << "Error line is empty" << std::endl;
			std::getline(fd, line);
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
	std::tm tmd = {};
	if (strptime(key.c_str(), "%Y-%m-%d", &tmd) == NULL){
		std::cerr << "Error: Bad input => " << key << std::endl;
		return (true);
	}
	std::stringstream date(key);
	int year, month, day;
	char tild;
	if (!(date >> year >> tild >> month >> tild >> day)){
		std::cerr << "Error: Bad input => " << key << std::endl;
		return (true);
	}
	tmd.tm_year = year - 1900;
	tmd.tm_mon = month - 1;
	tmd.tm_mday = day;

	time_t currentTime = time(NULL);
	if (mktime(&tmd) > currentTime) {
		std::cerr << "Error: Bad input => " << key << std::endl;
		return true;
	}
	if (year < 2009 || (year == 2009 && (month < 1 || (month == 1 && day < 2))) || mktime(&tmd) == -1){
		std::cerr << "Error: Bad input => " << key << std::endl;
		return (true);
	}
//	date >> std::get_time(&tmd, "%Y-%m-%d");
//	std::cout << "DAAAATE = " << date << "   key = " << key << std::endl;
//	if (!date){
//		std::cerr << "Error: Bad input => " << key << std::endl;
//		err = true;
//	}
	return (false);
}

bool	BitcoinExchange::valueCheck(std::string const &val){

	bool	err = false;
	float valtest = ft_stof(val);
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

	float	val = ft_stof(value);

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
