
#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Fixed
{
	private:
		int	nb;
		int const static nb_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &b);
		~Fixed();
		Fixed & operator=( Fixed const &rhs );
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
/*
//Default
Fixed a;
//Constructeur de recopie
Fixed b(a);
//Surcharge opérateur =
Fixed c;
c = a;
*/

#endif