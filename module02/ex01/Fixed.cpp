#include "Fixed.hpp"

const int Fixed::_bits = 8;
const int Fixed::_exp = 256;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value) : _value(value << _bits){
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value((int)(std::roundf(value * _exp))){
		std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return ((float)_value / (float)_exp);
}

int Fixed::toInt(void) const {
	return (this->_value >> _bits);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
		this->_value = copy.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return (os);
}