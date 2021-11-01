#include "Point.hpp"

Point::Point(void) : _x(Fixed(0.0f)), _y(Fixed(0.0f)) {}

Point::Point(const float &x, const float &y) :_x(Fixed(x)), _y(Fixed(y)){}

Point::Point(const Point &copy) : _x(copy.getPosX()), _y(copy.getPosY()){}

Point::~Point() {}

float Point::getPosX() const {
	return (this->_x.toFloat());
}

float Point::getPosY() const {
	return (this->_y.toFloat());
}

void Point::setPosX(const float &x) {
	this->_x = x;
}

void Point::setPosY(const float &y) {
	this->_y = y;
}

Point &Point::operator=(const Point &copy) {
	this->setPosX(copy.getPosX());
	this->setPosY(copy.getPosY());
	return (*this);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed i = (a.getPosX() - point.getPosX()) * (b.getPosY() - a.getPosY()) - (b.getPosX() - a.getPosX()) * (a.getPosY() - point.getPosY());
	Fixed j = (b.getPosX() - point.getPosX()) * (c.getPosY() - b.getPosY()) - (c.getPosX() - b.getPosX()) * (b.getPosY() - point.getPosY());
	Fixed k = (c.getPosX() - point.getPosX()) * (a.getPosY() - c.getPosY()) - (a.getPosX() - c.getPosX()) * (c.getPosY() - point.getPosY());
	if ((i < 0 && j < 0 && k < 0) || (i > 0 && j > 0 && k >0))
		return (true);
	return (false);
}