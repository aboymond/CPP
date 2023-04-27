
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
	bool	_int;
	bool 	_char;
	bool 	_float;
	bool 	_double;
//	int		_comp_points;
	Convert* to_char(std::string str);
	Convert* to_int(std::string toint);
	Convert* to_double(std::string todouble);
	Convert* to_float(std::string tofloat);
	Convert* printChar(std::string str);
	Convert* printInt(std::string toint);
	Convert* printDouble(std::string todouble);
	Convert* printFloat(std::string tofloat);
protected:

public:
	Convert();
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &rhs);
	~Convert();
	void parsing_input(std::string input);
	void parsing_input_length_1(std::string input);
	Convert* convert_to(std::string convertto);
	bool	comptChar(std::string input, char c);
};


#endif
