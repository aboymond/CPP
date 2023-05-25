
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <climits>
#include <cctype>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <exception>
#include <clocale>
#include <list>


class PmergeMe {
private:
	std::vector< std::pair<int,int> > _vec_pair;
	std::vector<int> _to_vec;
protected:

public:
	PmergeMe() : _vec_pair(), _to_vec() {};
	PmergeMe(PmergeMe const &cpy);
	PmergeMe &operator=(PmergeMe const &rhs);
	~PmergeMe();

	int checkInput(int argc, char **argv);
	int intVectorPair(int argc, char **argv);
	int sortPair();
	int sortToVector();
	void swap(std::pair<int,int>& p);
	void algoSort(std::vector< std::pair<int,int> >::iterator it);
	std::vector<int>::iterator binarySearch(std::vector<int>::iterator begin, std::vector<int>::iterator end, int value);
	void printOutput();
};


#endif
