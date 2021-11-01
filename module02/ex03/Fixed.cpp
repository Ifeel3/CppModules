#include "Fixed.hpp"

const int Fixed::_bits = 8;
const int Fixed::_exp = 256;

Fixed::Fixed(void) : _value(0) {}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::Fixed(const int value) : _value(value << _bits){}

Fixed::Fixed(const float value) : _value((int)(std::roundf(value * _exp))){}

float Fixed::toFloat(void) const {
	return ((float)_value / (float)_exp);
}

int Fixed::toInt(void) const {
	return (this->_value >> _bits);
}

int Fixed::getRawBits(void) const {
	return (this->_value);
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

Fixed& Fixed::operator=(const Fixed &copy) {
	if (this != &copy)
		this->_value = copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &copy) {
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed Fixed::operator-(const Fixed &copy) {
	return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed Fixed::operator*(const Fixed &copy) {
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed Fixed::operator/(const Fixed &copy) {
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed& Fixed::operator++() {
	this->_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed prev = *this;
	this->_value += 1;
	return (prev);
}

Fixed& Fixed::operator--() {
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed prev = *this;
	this->_value -= 1;
	return (prev);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
	if (first <= second)
		return (first);
	return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
	if (first >= second)
		return (first);
	return (second);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return (os);
}

bool operator<(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() < second.getRawBits());
}

bool operator>(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() > second.getRawBits());
}

bool operator<=(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() <= second.getRawBits());
}

bool operator>=(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() >= second.getRawBits());
}

bool operator==(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() == second.getRawBits());
}

bool operator!=(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() != second.getRawBits());
}