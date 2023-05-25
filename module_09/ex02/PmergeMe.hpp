
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
	std::list< std::pair<int,int> > _list_pair;
	std::vector<int> _to_vec;
	std::list<int> _to_list;
	clock_t _time;
	int _elem_compt;
protected:

public:
	PmergeMe() : _vec_pair(), _to_vec(), _elem_compt(0) {};
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

	int intListPair(int argc, char **argv);
	int sortListPair();
	int sortToList();
	bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b);
	void algoSortList(std::list< std::pair<int,int> >::iterator it);
	std::list<int>::iterator binaryListSearch(std::list<int>::iterator begin, std::list<int>::iterator end, int value);
	void printOutputList();
};


#endif
