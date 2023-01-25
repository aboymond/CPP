
#include "ft_replace.hpp"

std::string		ft_replace(std::string word, std::string word_rep, std::string tmp){

	if (word.find(tmp)){
		std::cout << "replace word OK" << std::endl;
	}
	return word_rep;
}