#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
private:
	Fixed _x;
	Fixed _y;
public:
	Point(void);
	Point(const float& x, const float& y);
	Point(const Point& copy);
	~Point(void);

	float getPosX(void) const;
	float getPosY(void) const;
	void setPosX(const float& x);
	void setPosY(const float& y);
	Point& operator=(const Point& copy);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif