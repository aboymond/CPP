
#include "Fixed.hpp"

Fixed::Fixed() : _nb(0){

}

Fixed::Fixed(int nb) : _nb(nb << _nb_bits){

}

Fixed::Fixed(float nb){
	this->_nb = (int)roundf(nb * (1 << this->_nb_bits));

}

Fixed::~Fixed() {

}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;

}

int	Fixed::getRawBits(void) const {

	return this->_nb;
}

void	Fixed::setRawBits(int const raw){
	this->_nb = raw;
}

Fixed &	Fixed::operator=(Fixed const &rhs){

	this->_nb = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const{
	return ((float)this->_nb / (float)(1 << this->_nb_bits));
 }

int		Fixed::toInt(void) const{
	return roundf(this->_nb >> this->_nb_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ){
	o << rhs.toFloat();
	return (o);
}

bool    Fixed::operator<(const Fixed &rhs) const{
    return (this->toFloat() < rhs.toFloat());
}

bool    Fixed::operator>(const Fixed &rhs) const{
    return (this->toFloat() > rhs.toFloat());
}

bool    Fixed::operator>=(const Fixed &rhs) const{
    return (this->toFloat() >= rhs.toFloat());
}

bool    Fixed::operator<=(const Fixed &rhs) const{
    return (this->toFloat() <= rhs.toFloat());
}

bool    Fixed::operator==(const Fixed &rhs) const{
    return (this->toFloat() == rhs.toFloat());
}

bool    Fixed::operator!=(const Fixed &rhs) const{
    return (this->toFloat() != rhs.toFloat());
}


Fixed  Fixed::operator+(const Fixed &rhs) const{
    return (this->toFloat() + rhs.toFloat());
}

Fixed  Fixed::operator-(const Fixed &rhs) const{
    return (this->toFloat() - rhs.toFloat());
}

Fixed  Fixed::operator*(const Fixed &rhs) const{
    return (this->toFloat() * rhs.toFloat());
}

Fixed  Fixed::operator/(const Fixed &rhs) const{
    return (this->toFloat() / rhs.toFloat());
}


Fixed &Fixed::operator++(){
    ++_nb;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed   tmp(*this);
    ++_nb;
    return (tmp);
}

Fixed &Fixed::operator--(){
    --_nb;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed   tmp(*this);
    --_nb;
    return (tmp);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs){
    if (lhs < rhs)
        return (lhs);
    else
        return (rhs);
}

Fixed Fixed::min(Fixed const &lhs, Fixed const &rhs){
    Fixed res;

    if (lhs < rhs)
        res.setRawBits(lhs.getRawBits());
    else
        res.setRawBits(rhs.getRawBits());
    return (res);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs){
    if (lhs > rhs)
        return (lhs);
    else
        return (rhs);
}

Fixed Fixed::max(Fixed const &lhs, Fixed const &rhs){
    Fixed res;

    if (lhs > rhs)
        res.setRawBits(lhs.getRawBits());
    else
        res.setRawBits(rhs.getRawBits());
    return (res);
}
