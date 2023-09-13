
#include "Fixed.hpp"
Fixed::Fixed() : _numFixed(0), _bitsFra(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : _numFixed(obj._numFixed), _bitsFra(8)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed &operator = (const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "" << std::endl;//put
}

