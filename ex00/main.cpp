#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

//*//Fixed()
// Default constructor called

//*//Fixed::Fixed(const Fixed &obj)
//Copy constructor called
//Copy assignment operator called // <-- This line may be missing depending on your implementation
//getRawBits member function called

//*//Fixed()
//Default constructor called

//*//Fixed &Fixed::operator=(const Fixed &obj)
//Copy assignment operator called
//getRawBits member function called

//getRawBits member function called
//0
//getRawBits member function called
//0
//getRawBits member function called
//0

//Destructor called
//Destructor called
//Destructor called