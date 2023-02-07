
#include "Fixed.hpp"

Fixed::Fixed() {
	this->nb = 42;
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(int nb) {
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float nb) {
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
	return this->nb;
}

void	Fixed::setRawBits(int const raw){
	this->nb = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const{
	
}

int		Fixed::toint(void) const{

}