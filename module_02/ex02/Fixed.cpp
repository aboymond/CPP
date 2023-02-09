
#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int nb) : _nb(nb << _nb_bits){
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float nb){
	this->_nb = (int)roundf(nb * (1 << this->_nb_bits));
	std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructeur called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;
	std::cout << "Copy construtor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nb;
}

void	Fixed::setRawBits(int const raw){
	this->_nb = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const{
	return ((float)this->_nb / (float)(1 << this->_nb_bits));
 }

int		Fixed::toint(void) const{
	return roundf(this->_nb >> this->_nb_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ){
	o << rhs.toFloat();
	return (o);
}