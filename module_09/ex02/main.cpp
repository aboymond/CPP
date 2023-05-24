
#include "PmergeMe.hpp"

void swap(std::pair<int,int>& p)
{
	int tmp;

	tmp = p.first;
	p.first = p.second;
	p.second = tmp;
}

//int	recurSort(int)

int main(int argc, char **argv){
	(void)argv;
	if (argc < 2){
		std::cout << "Error: Bad input" << std::endl;
		exit (EXIT_FAILURE);
	}
	else if (argc < 3){
		std::cout << "Error: you need minimum 2 integer" << std::endl;
		exit (EXIT_FAILURE);
	}
	for (int i = 1; argv[i]; i++){
		if (std::atoi(argv[i]) < 0){
			std::cout << "Error: Not a positive integer" << std::endl;
			exit (EXIT_FAILURE);
		}
		else if (std::atoi(argv[i]) >= 468366449){
			std::cout << "Error: INT_MAX" << std::endl;
			exit (EXIT_FAILURE);
		}
	}

	bool pair_ok = false;
	int val1;
	int val2;
	if ((argc - 1) % 2 == 0)
		pair_ok = true;

	//Init vector pair
	std::cout << "Init vector pair" << std::endl;

	std::vector< std::pair<int,int> > vec;
	for (int i = 1; i < argc; i += 2){
		val1 = std::atoi(argv[i]);
		if (!pair_ok && argv[i + 1] == NULL)
			val2 = -1;
		else
			val2 = std::atoi(argv[i + 1]);
		vec.push_back(std::make_pair(val1, val2));
		std::cout << vec[vec.size() - 1].first << " " << vec.back().second << std::endl;
	}

	//Sort pair
	std::cout << "Sort pair" << std::endl;

	std::vector< std::pair<int,int> >::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it ){
		if (it->first > it->second){
			swap(*it);
		}
		std::cout << it->first << ": " << it->second << std::endl;
	}

	//To pre_sort
	std::cout << "To vector " << std::endl;

//	int pos;
	std::vector<int> to_vec;
	for (it = vec.begin(); it != vec.end(); ++it ){
		if (to_vec.empty())
			to_vec.push_back(it->first);
		else if (it->first == -1)
			continue;

		else {
			std::vector<int>::iterator pos = std::lower_bound(to_vec.begin(), to_vec.end(), it->first);
			to_vec.insert(pos, it->first);
		}
	}
	for (unsigned int i = 0; i < to_vec.size(); i++)
		std::cout << "vec[" << i << "]" << to_vec[i] << std::endl;
}

