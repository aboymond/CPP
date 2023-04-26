
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cctype>


class Convert {
private:
	int		_int;
	char 	_char;
	float 	_float;
	double 	_double;
	Convert* to_char(std::string str);
	Convert* to_int(std::string toint);
	Convert* to_double(std::string todouble);
	Convert* to_float(std::string tofloat);
protected:

public:
	Convert();
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &rhs);
	~Convert();
	std::string parsing_input(std::string input);
	std::string parsing_input_length_1(std::string input);
	Convert* convert_to(std::string convertto);
};


#endif
