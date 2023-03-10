#include "Fixed.hpp"

int	main(void){

	Fixed 		a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << "\033[31mTEST INTRA\033[0m \n" << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

    std::cout << "b = " << b << std::endl;

    std::cout << "Max entre a et b = " << Fixed::max( a, b ) << std::endl;
    std::cout << "Min entre a et b = " << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;

	std::cout << "\033[31mTEST PERSO\033[0m \n" << std::endl;

	Fixed	c(5);
	std::cout << "c = 5" << std::endl;
	Fixed	d(10);
	std::cout << "d = 10" << std::endl;
	Fixed	e(12.05f);
	std::cout << "e = 12.05" << std::endl;
	Fixed	f(5);
	std::cout << "f = 5" << std::endl;

	std::cout << "\033[31mTEST OPERATEURS DE COMPARAISON\033[0m \n" << std::endl;

	std::cout << "d > c :" << std::endl;
	if (d > c)
		std::cout << "d > c\t" << d << " > " << c << std::endl;
	else
		std::cout << "d < c\t" << d << " > " << c << std::endl;
	std::cout << std::endl;

	std::cout << "d <= e :" << std::endl;
	if (d <= e)
		std::cout << "d <= e\t" << d << " <= " << e << std::cout;
	std::cout << std::endl;

	std::cout << "c == f\t" <<std::endl;
	if (c == f)
		std::cout << "c == f\t" << c << "==" << f << std::endl;
	std::cout << std::endl;

	std::cout << "\033[31mTEST OPERATEURS ARITHMETIQUE\033[0m \n" << std::endl;
	std::cout << std::endl;

	std::cout << "c + d =\t" << c + d << std::endl;
	std::cout << "d - e =\t" << d - e << std::endl;
	std::cout << "c x f =\t" << c * f << std::endl;
	std::cout << "e / c =\t" << e / c << std::endl;

	return 0;

}