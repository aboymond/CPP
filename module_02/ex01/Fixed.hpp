
#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int	nb;
		int const static nb_bits = 8;
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

#endif