
#ifndef DATA_HPP
#define DATA_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <cctype>
#include <sstream>
#include <climits>
#include <locale>

struct Data{
	void *ptr;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
