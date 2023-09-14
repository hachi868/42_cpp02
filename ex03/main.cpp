#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const target);

int main( void ) {
	Point a;
	Point b( 12.2, 0 );
	Point c( 5.5, 6.6 );
	Point target( 5.5, 1 );
	std::cout << bsp( a, b, c, target) << std::endl;
	return 0;
}