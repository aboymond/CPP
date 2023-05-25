
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
//		std::string arg = argv[i];
		for (int j = 0; argv[i][j]; j++){
			if ((!std::isdigit(argv[i][j]))){
				std::cout << "Error: Bad input " << std::endl;
				exit(EXIT_FAILURE);
			}

}
		if (std::atol(argv[i]) < 0){
			std::cout << "Error: Bad input" << std::endl;
			exit (EXIT_FAILURE);
		}
		else if (std::atol(argv[i]) >= 468366449){
			std::cout << "Error: INT_MAX" << std::endl;
			exit (EXIT_FAILURE);
		}
	}
	return (0);
}

int PmergeMe::intVectorPair(int argc, char **argv){
	bool pair_ok = false;
	int val1;
	int val2;
	if ((argc - 1) % 2 == 0)
		pair_ok = true;

	//Init vector pair
//	std::cout << "Init vector pair" << std::endl;

	for (int i = 1; i < argc; i += 2){
		val1 = std::atoi(argv[i]);
		if (!pair_ok && argv[i + 1] == NULL)
			val2 = -1;
		else
			val2 = std::atoi(argv[i + 1]);
		_vec_pair.push_back(std::make_pair(val1, val2));
//		std::cout << _vec_pair[_vec_pair.size() - 1].first << " " << _vec_pair.back().second << std::endl;
	}
	return (0);
}

int PmergeMe::sortPair(){
//	std::cout << "Sort pair" << std::endl;

	std::vector< std::pair<int,int> >::iterator it;
	for (it = _vec_pair.begin(); it != _vec_pair.end(); ++it ){
		if (it->first > it->second){
			swap(*it);
		}
//		std::cout << it->first << ": " << it->second << std::endl;
	}
	return (0);
}

int PmergeMe::sortToVector(){
//	std::cout << "To vector " << std::endl;

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
//	for (unsigned int i = 0; i < _to_vec.size(); i++)
//		std::cout << "_vec_pair[" << i << "]" << _to_vec[i] << std::endl;
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
//	for (unsigned int i = 0; i < _to_vec.size(); i++)
//		std::cout << "algo " << _to_vec[i] << std::endl;
	it++;
	algoSort(it);
}

std::vector<int>::iterator PmergeMe::binarySearch(std::vector<int>::iterator begin, std::vector<int>::iterator end, int value){
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
	for (std::vector<int>::iterator it = _to_vec.begin(); it != _to_vec.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
