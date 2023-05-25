
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

	PmergeMe test;

	test.checkInput(argc, argv);
	test.intVectorPair(argc, argv);
	test.sortPair();
	test.sortToVector();

	test.intListPair(argc, argv);
	test.sortListPair();
	test.sortToList();

}

