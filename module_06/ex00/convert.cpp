
#include "convert.hpp"


Convert::Convert(){
	_int = 0;
	_char = '\0';
	_float = 0;
	_double = 0;
}
Convert::~Convert() {}
Convert::Convert(Convert const &cpy) : _int(cpy._int), _char(cpy._char), _float(cpy._float), _double(cpy._double) {
	*this = cpy;
}

std::string Convert::parsing_input(std::string input) {
	(void)input;
	return(NULL);
}

std::string Convert::parsing_input_length_1(std::string input){
	if (input[0] >= 48 && input[0] <= 57)
		std::cout << input << " = int" << std::endl;
	else if (input[0] >= 65 && input[0] <= 122)
		std::cout << input << " = char" << std::endl;
	std::cout << "teeeeeeest" << std::endl;
	return("NULL");
}

Convert &Convert::operator=(Convert const &rhs) {
	if (this != &rhs){
	}
	return (*this);
}
