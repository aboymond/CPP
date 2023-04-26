#include "convert.hpp"

int main(int argc, char** argv)
{
	if (argc < 2){
		std::cout << "No arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	Convert input;
	std::string	str(argv[1]);
	std::cout << "Teeeest = " << str << std::endl;
	if (str.length() == 1)
		input.parsing_input_length_1(str);
	else{
		std::cout << "(argv != 1) = " << str << std::endl;
	}
	return (0);
}