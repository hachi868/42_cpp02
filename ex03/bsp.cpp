#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const target)
{
	float a_x, a_y, b_x, b_y, c_x, c_y, target_x, target_y;
	float denominator, num1, num2, coefVaricentric1, coefVaricentric2, coefVaricentric3;
	if (a == b || b == c || c == a || a == target || b == target || c == target)
		return (false);
	a_x = a.getPosX();
	a_y = a.getPosY();
	b_x = b.getPosX();
	b_y = b.getPosY();
	c_x = c.getPosX();
	c_y = c.getPosY();
	target_x = target.getPosX();
	target_y = target.getPosY();
	denominator = (b_y - c_y) * (a_x - c_x) + (c_x - b_x) * (a_y - c_y);
	num1 = target_x - c_x;
	num2 = target_y - c_y;
	coefVaricentric1 = ((b_y - c_y) * num1 + (c_x - b_x) * num2) / denominator;
	coefVaricentric2 = ((c_y - a_y) * num1 + (a_x - c_x) * num2) / denominator;
	coefVaricentric3 = 1 - coefVaricentric1 - coefVaricentric2;
	if (coefVaricentric1 >= 0 && coefVaricentric1 <= 1 &&
		coefVaricentric2 >= 0 && coefVaricentric2 <= 1 &&
		coefVaricentric3 >= 0 && coefVaricentric3 <= 1)
		return (true);
	return (false);
}

