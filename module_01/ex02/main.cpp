
#include <iostream>

int	main(){

	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;    //Ptr est un pointeur
	std::string	&stringREF = str;     //Ref ne peux pas etre = null

	std::cout << "Adresse str       :   " << &str << std::endl;
	std::cout << "Adresse stringPTR :   " << stringPTR << std::endl;
	std::cout << "Adresse stringREF :   " << &stringREF << std::endl;
	std::cout << "\nValeur str        :   " << str << std::endl;
	std::cout << "Valeur stringPTR  :   " << *stringPTR << std::endl;
	std::cout << "Valeur stringREF  :   " << stringREF << std::endl;
}
