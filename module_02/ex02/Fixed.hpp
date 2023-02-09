
#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

class Fixed
{
	private:
		int	_nb;
		int const static _nb_bits = 8;
	public:
		Fixed(void);
		Fixed(int nb);
		Fixed(float nb);
		Fixed(const Fixed &b);
		~Fixed();
		Fixed & operator=( Fixed const &rhs );
		float	toFloat(void) const;
		int		toint(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );


#endif