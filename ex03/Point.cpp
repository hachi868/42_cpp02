#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::Point(const float fl_x, const float fl_y) : _x(fl_x), _y(fl_y)
{

}

Point::Point(const Point &obj): _x(obj._x), _y(obj._y)
{

}

Point::~Point()
{

}

float Point::getPosX(void) const
{
	return (this->_x.Fixed::toFloat());
}

float Point::getPosY(void) const
{
	return (this->_y.Fixed::toFloat());
}

bool Point::operator == (const Point &obj) const
{
	if (this->_x == obj.getPosX() && this->_y == obj.getPosY())
		return (true);
	return (false);
}
