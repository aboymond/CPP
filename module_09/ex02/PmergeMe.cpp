
#include "PmergeMe.hpp"

//PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &cpy) {
	*this = cpy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
	if (this != &rhs){
		_vec_pair = rhs._vec_pair;
		_to_vec = rhs._to_vec;
	}
	return (*this);
}


int PmergeMe::checkInput(int argc, char **argv){
	if (argc < 2){
		std::cout << "Error: Bad input" << std::endl;
		exit (EXIT_FAILURE);
	}
	else if (argc < 3){
		std::cout << "Error: you need minimum 2 integer" << std::endl;
		exit (EXIT_FAILURE);
	}
	for (int i = 1; argv[i]; i++){
		for (int j = 0; argv[i][j]; j++) {
			if ((!std::isdigit(argv[i][j]))) {
				std::cout << "Error: Bad input '" << argv[i] << "'" << std::endl;
				exit(EXIT_FAILURE);
		}
		if (std::atol(argv[i]) < 0){
			std::cout << "Error: Bad input '" << argv[i] << "'" << std::endl;
			exit (EXIT_FAILURE);
		}
		else if (std::atol(argv[i]) >= 468366449){
			std::cout << "Error: INT_MAX" << std::endl;
			exit (EXIT_FAILURE);
		}
	}
	}
	for (int i = 1; argv[i]; i++){
		for (int j = i + 1; argv[j]; j++){
			if (std::strcmp(argv[j], argv[i]) == 0){
				std::cout << "Error: Doublon '" << argv[j] << "'" << std::endl;
				exit(EXIT_FAILURE);
			}
		}
	}
	for (int i = 1; argv[i]; i++){
		_elem_compt++;
	}
	return (0);
}

int PmergeMe::intVectorPair(int argc, char **argv){
	_time = clock();
	bool pair_ok = false;
	int val1;
	int val2;
	if ((argc - 1) % 2 == 0)
		pair_ok = true;

	std::cout << "Before: ";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << ' ';
	std::cout << std::endl;
	for (int i = 1; i < argc; i += 2){
		val1 = std::atoi(argv[i]);
		if (!pair_ok && argv[i + 1] == NULL)
			val2 = -1;
		else
			val2 = std::atoi(argv[i + 1]);
		_vec_pair.push_back(std::make_pair(val1, val2));
	}
	return (0);
}

int PmergeMe::sortPair(){
	std::vector< std::pair<int,int> >::iterator it;
	for (it = _vec_pair.begin(); it != _vec_pair.end(); ++it ){
		if (it->first > it->second){
			swap(*it);
		}
	}
	return (0);
}

int PmergeMe::sortToVector(){
	std::vector< std::pair<int,int> >::iterator it;
	for (it = _vec_pair.begin(); it != _vec_pair.end(); ++it ){
		if (_to_vec.empty())
			_to_vec.push_back(it->first);
		else if (it->first == -1)
			continue;

		else {
			std::vector<int>::iterator pos = std::lower_bound(_to_vec.begin(), _to_vec.end(), it->first);
			_to_vec.insert(pos, it->first);
		}
	}
	it = _vec_pair.begin();
	algoSort(it);
	printOutput();
	return (0);
}

void PmergeMe::swap(std::pair<int,int>& p){
	int tmp;

	tmp = p.first;
	p.first = p.second;
	p.second = tmp;
}

void PmergeMe::algoSort(std::vector< std::pair<int,int> >::iterator it){
	if (it != _vec_pair.end()){
		std::vector<int>::iterator pos = binarySearch(_to_vec.begin(), _to_vec.end(), it->second);
		_to_vec.insert(pos, it->second);
	}
	else
		return;
	it++;
	algoSort(it);
}

std::vector<int>::iterator PmergeMe::binarySearch(std::vector<int>::iterator
begin, std::vector<int>::iterator end, int value){
	std::vector<int>::iterator low = begin;
	std::vector<int>::iterator high = end;
	while(low < high){
		std::vector<int>::iterator mid = low + (high - low) / 2;
		if (*mid < value)
			low = mid +1;
		else
			high = mid;
	}
	return (low);
}

void PmergeMe::printOutput(){
	clock_t end_time = clock();
	double diff_time = ((double)end_time - (double)_time) / (CLOCKS_PER_SEC / 1000000);
	std::cout << "After:  ";
	for (std::vector<int>::iterator it = _to_vec.begin(); it != _to_vec.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " <<  _elem_compt
	<< " elements with std::vector :  " << diff_time << " us" <<std::endl;
}


// list



int PmergeMe::intListPair(int argc, char **argv){
	_time = clock();
	bool pair_ok = false;
	int val1;
	int val2;
	if ((argc - 1) % 2 == 0)
		pair_ok = true;

	for (int i = 1; i < argc; i += 2){
		val1 = std::atoi(argv[i]);
		if (!pair_ok && argv[i + 1] == NULL)
			val2 = -1;
		else
			val2 = std::atoi(argv[i + 1]);
		_list_pair.push_back(std::make_pair(val1, val2));
	}
	return (0);
}

int PmergeMe::sortListPair(){

	std::list< std::pair<int,int> >::iterator it;
	for (it = _list_pair.begin(); it != _list_pair.end(); ++it ){
		if (it->first > it->second){
			swap(*it);
		}
	}
	return (0);
}

int PmergeMe::sortToList(){
	std::list< std::pair<int,int> >::iterator it;
	for (it = _list_pair.begin(); it != _list_pair.end(); ++it ){
		if (_to_list.empty())
			_to_list.push_back(it->first);
		else if (it->first == -1)
			continue;

		else {
			std::list<int>::iterator pos = std::lower_bound(_to_list.begin(), _to_list.end(), it->first);
			_to_list.insert(pos, it->first);
		}
	}
	it = _list_pair.begin();
	algoSortList(it);
	printOutputList();
	return (0);
}


void PmergeMe::algoSortList(std::list< std::pair<int,int> >::iterator it){
	if (it != _list_pair.end()){
		std::list<int>::iterator pos = std::lower_bound(_to_list.begin(), _to_list.end(), it->first);
		_to_list.insert(pos, it->first);
	}
	else
		return;
	it++;
	algoSortList(it);
}

bool PmergeMe::comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b) {
	return a.first < b.first;
}

void PmergeMe::printOutputList(){
	clock_t end_time = clock();
	double diff_time = ((double)end_time - (double)_time) / (CLOCKS_PER_SEC / 1000000);
	std::cout << "Time to process a range of " <<  _elem_compt
	<< " elements with std::list :  " << diff_time << " us" <<std::endl;
}
