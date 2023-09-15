#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const target);

int main( void ) {
	Point a;
	Point b( 12.2, 0 );
	Point c( 5.5, 6.6 );
	Point target1( 5.5, 1 );
	std::cout << bsp(a, b, c, target1) << std::endl;
	Point target2(-5.5, 1);
	std::cout << bsp(a, b, c, target2) << std::endl;
	Point target3(5.5, 0);
	std::cout << bsp(a, b, c, target3) << std::endl;
	Point target4(5.5, 0.1);
	std::cout << bsp(a, b, c, target4) << std::endl;
	return 0;
}