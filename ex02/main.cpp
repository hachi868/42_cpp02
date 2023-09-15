#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "Fixed::max( a, b ) : " << Fixed::max(a, b) << std::endl;
	std::cout << "Fixed::min( a, b ) : " << Fixed::min(a, b) << std::endl;

	Fixed c(10);
	Fixed d(76.42f);
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "( " << c << " > " << d << " ) : " << (c > d) << std::endl;
	std::cout << "( " << c << " < " << d << " ) : " << (c < d) << std::endl;
	std::cout << "( " << c << " >= " << d << " ) : " << (c >= d) << std::endl;
	std::cout << "( " << c << " <= " << d << " ) : " << (c <= d) << std::endl;
	std::cout << "( " << c << " == " << d << " ) : " << (c == d) << std::endl;
	std::cout << "( " << c << " != " << d << " ) : " << (c != d) << std::endl;

	std::cout << "( " << c << " + " << d << " ) : " << (c + d) << std::endl;
	std::cout << "( " << c << " - " << d << " ) : " << (c - d) << std::endl;
	std::cout << "( " << c << " * " << d << " ) : " << (c * d) << std::endl;
	std::cout << "( " << c << " / " << d << " ) : " << (c / d) << std::endl;

	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "Fixed::max( c, d ) : " << Fixed::max(c, d) << std::endl;
	std::cout << "Fixed::min( c, d ) : " << Fixed::min(c, d) << std::endl;

	Fixed &e = d;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "( " << d << " > " << e << " ) : " << (d > e) << std::endl;
	std::cout << "( " << d << " < " << e << " ) : " << (d < e) << std::endl;
	std::cout << "( " << d << " >= " << e << " ) : " << (d >= e) << std::endl;
	std::cout << "( " << d << " <= " << e << " ) : " << (d <= e) << std::endl;
	std::cout << "( " << d << " == " << e << " ) : " << (d == e) << std::endl;
	std::cout << "( " << d << " != " << e << " ) : " << (d != e) << std::endl;

	std::cout << "( " << d << " + " << e << " ) : " << (d + e) << std::endl;
	std::cout << "( " << d << " - " << e << " ) : " << (d - e) << std::endl;
	std::cout << "( " << d << " * " << e << " ) : " << (d * e) << std::endl;
	std::cout << "( " << d << " / " << e << " ) : " << (d / e) << std::endl;
	std::cout << "Fixed::max( d, e ) : " << Fixed::max(d, e) << std::endl;
	std::cout << "Fixed::min( d, e ) : " << Fixed::max(d, e) << std::endl;

	const Fixed f(10);
	const Fixed g(76.42f);
	std::cout << "f : " << f << std::endl;
	std::cout << "g : " << g << std::endl;
	std::cout << "Fixed::max( f, g ) : " << Fixed::max(f, g) << std::endl;
	std::cout << "Fixed::min( f, g ) : " << Fixed::min(f, g) << std::endl;
	const Fixed &h = g;
	std::cout << "g : " << g << std::endl;
	std::cout << "h : " << h << std::endl;
	std::cout << "Fixed::max( g, h ) : " << Fixed::max(g, h) << std::endl;
	std::cout << "Fixed::min( g, h ) : " << Fixed::min(g, h) << std::endl;

	return 0;
}