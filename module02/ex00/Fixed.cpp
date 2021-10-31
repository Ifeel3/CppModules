#include "Fixed.hpp"

const int Fixed::_bits = 8;

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