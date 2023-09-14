#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(const float fl_x, const float fl_y);
	Point(const Point &obj);
	~Point();
	float getPosX(void) const;
	//void setPosX(float fl_x);
	float getPosY(void) const;
	//void setPosY(float fl_y);
	bool operator == (const Point &obj) const;
private:
	const Fixed _x;
	const Fixed _y;
	Point &operator = (const Point &);
};

#endif //__POINT_H__
