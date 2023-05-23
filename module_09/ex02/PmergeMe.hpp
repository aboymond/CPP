
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <exception>
#include <vector>
#include <list>


class PmergeMe {
private:

protected:

public:
	PmergeMe();

	PmergeMe(PmergeMe &cpy);

	PmergeMe &operator=(PmergeMe const &rhs);

	~PmergeMe();
};


#endif
