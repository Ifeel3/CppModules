#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
private:

	int _value;
	static const int _exp;
	static const int _bits;

public:

	Fixed(void);
	Fixed(const Fixed& copy);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);

	Fixed& operator=(const Fixed& copy);

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif