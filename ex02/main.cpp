#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	std::cout << a << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;


	Fixed c( Fixed( 10.01f ));
	Fixed d( Fixed( 76.42f ));
	std::cout << "( " << c << " > " << d << " ) : " << (c > d) << std::endl;
	std::cout << "( " << c << " < " << d << " ) : " << (c < d) << std::endl;
	std::cout << "( " << c << " >= " << d << " ) : " << (c >= d) << std::endl;
	std::cout << "( " << c << " <= " << d << " ) : " << (c <= d) << std::endl;
	std::cout << "( " << c << " == " << d << " ) : " << (c == d) << std::endl;
	std::cout << "( " << c << " != " << d << " ) : " << (c != d) << std::endl;
	return 0;
}