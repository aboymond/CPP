#include "easyfind.hpp"

int main(){
	std::cout << "\033[4;32mTest vector <int>: true\033[0m" << std::endl;
	std::vector<int>	vec;
	vec.push_back(5);
	vec.push_back(845);
	vec.push_back(978);
	vec.push_back(12);
	vec.push_back(2);
	easyfind(vec, 845);
	std::cout << std::endl;

	std::cout << "\033[4;32mTest list <int>: true\033[0m" << std::endl;
	std::list<int>		lst;
	lst.push_back(78);
	lst.push_back(4);
	lst.push_back(67);
	lst.push_back(23);
	lst.push_back(10);
	easyfind(lst, 67);
	std::cout << std::endl;

	std::cout << "\033[4;31mTest vector <int>: false\033[0m" << std::endl;
	easyfind(vec, 844);
	std::cout << std::endl;

	std::cout << "\033[4;31mTest list <int>: false\033[0m" << std::endl;
	easyfind(lst, 68);
	std::cout << std::endl;


	return(0);
}