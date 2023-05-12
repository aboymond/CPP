
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <exception>
#include <list>


template<typename T>
void	easyfind(T &param, int const i)
{
	typename	T::const_iterator it;
	for (it = param.begin(); it != param.end(); ++it){
		if (*it == i){
			std::cout << "The first occurrence is = '" << *it << "'" << std::endl;
			break;
		}
	}
	if (it == param.end())
		std::cout << "Error no occurrence !" << std::endl;
}


#endif
