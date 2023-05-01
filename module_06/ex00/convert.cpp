
#include "convert.hpp"


int Convert::ft_stoi( std::string & s ) {
	int i;
	std::istringstream(s) >> i;
	return i;
}

Convert::Convert(){
	_int = false;
	_char = false;
	_float = false;
	_double = false;

}
Convert::~Convert() {}
Convert::Convert(Convert const &cpy) : _int(cpy._int), _char(cpy._char), _float(cpy._float), _double(cpy._double) {
	*this = cpy;
}

void Convert::parsing_input(std::string input) {
	bool comp_points = false;
	bool comp_letters = false;
	bool comp_dash = false;
	if (input == "-inff" || input == "+inff" || input == "nanf"){
		_float = true;
	}
	else if (input == "-inf" || input == "+inf" || input == "nan"){
		_double = true;
	}
	else{
		comp_dash = comptChar(input, '-');
		comp_points = comptChar(input, '.');
		comp_letters = comptChar(input, 'f');
		if (comp_letters == false || comp_points == false || comp_dash == false){
			exit (EXIT_FAILURE);
		}
		for (int i = 0; input[i]; i++)
			if ((input[i] >= 0 && input[i] <= 44) || (input[i] == 47) || (input[i] >= 58 && input[i] <= 101) || (input[i] >= 103 && input[i] <= 127)){
				std::cout << "Error bad input = '" << input << "'" << std::endl;
				exit (EXIT_FAILURE);
		}

		if (input.find('.') != std::string::npos)
		{
			if (input.find('f') != std::string::npos)
				_float = true;
			else
				_double = true;
		}
		else
			_int = true;
	}
	std::cout << "int = " << _int << "\tfloat = " << _float << "\tdouble = " << _double << std::endl;
}

bool Convert::comptChar(std::string input, char c){
	bool	comp_ok = false;
	int		comp_char = 0;
	int j = input.length();
	for (int i = 0; input[i]; i++){
		if (input[i] == 'f' && c == 'f'){
			if (j > i + 1){
				std::cout << "i = " << i << std::endl;
				comp_ok = false;
				std::cout << "Bad char '" << c << "'" << std::endl;
				return (comp_ok);
			}
		}
		if (c == '-' && input[i] == '-'){
			if (c != input[0]){
				comp_ok = false;
				std::cout << "Bad char '" << c << "'" << std::endl;
				return (comp_ok);
			}
		}
		else if (input[i] == c){
			comp_char++;
		}
	}
	if (comp_char <= 1)
		comp_ok = true;
	else
		std::cout << "Too many '" << c << "'" << std::endl;
	return (comp_ok);
}

void Convert::parsing_input_length_1(std::string input){
	if (input[0] >= 48 && input[0] <= 57){
		_int = true;
		std::cout << input << " = int" << std::endl;
	}
	else if ((input[0] >= 65 && input[0] <= 90) || (input[0] >= 97 && input[0] <= 122)){
		_char = true;
		std::cout << input << " = char" << std::endl;
	}
	else{
		_int = false;
		_char = false;
		std::cout << "'" << input << "'" << "is wrong input" << std::endl;
	}
	std::cout << "int = " << _int << "\tchar = " << _char << std::endl;
}

Convert &Convert::operator=(Convert const &rhs) {
	if (this != &rhs){
	}
	return (*this);
}

Convert *Convert::convert_to(std::string convertto) {
	Convert* (Convert::*ptr_conv[4]) (std::string) = {&Convert::to_char, &Convert::to_int, &Convert::to_float, &Convert::to_double};
	for (int i = 0; i < 4; i++){
		(this->*ptr_conv[i])(convertto);
	}
	exit (0);
}

Convert* Convert::to_char(std::string str) {
	std::cout << "Test str" << str << std::endl;
	int i = 0;
	int ch;
	while (i < str[i]){
		i++;
	}
	if (i > 1)
		ch  = ft_stoi(str);
	if (_char == 1){
		char c = str[0];
		std::cout << "char = " << static_cast<char>(c) << std::endl;
//		printChar(str);
	}
	else if (_char == 0 && (ch >= 32 && ch <= 126)){
		std::cout << "Test str " << ch << std::endl;
		std::cout << "char 1 = '" << static_cast<char>(ch) << "'" << std::endl;
	}
	else if ((_char == 0 && (ch >= 0 && ch <= 31)) || (_char == 0 && ch == 127)){
		std::cout << "char = no displayable" << std::endl;
	}
	else
		std::cout << "char = impossible" << std::endl;
	return(0);
}

Convert* Convert::to_int(std::string str){
	int c = ft_stoi(str);
	std::cout << "test int = " << static_cast<float>(c) << std::endl;
//	if (c < )
	return (0);
}
Convert* Convert::to_double(std::string str){
	(void)str;
	return (0);
}
Convert* Convert::to_float(std::string str){
	(void)str;
	return (0);
}