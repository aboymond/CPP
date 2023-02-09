
#include "ft_replace.hpp"

std::string		ft_replace(std::string word, std::string word_rep, std::string tmp){
	int	ret = 0;

	ret = tmp.find(word, ret);
	while (ret != std::string::npos) {
		std::cout << "Before ->\t" << tmp << std::endl;
		tmp.erase(ret, word.length());
		tmp.insert(ret, word_rep);
		ret = tmp.find(word, ret+1);
		std::cout << "After  ->\t" << tmp << std::endl;
	//exit (0);
	}
	return (tmp);
}
