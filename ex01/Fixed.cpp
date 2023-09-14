#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_bitsFra = 8;

Fixed::Fixed() : _rawBit(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int num_i) : _rawBit(num_i << this->_bitsFra)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num_fl) : _rawBit((int)roundf(num_fl * (1 << this->_bitsFra)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBit);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_rawBit = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_rawBit / (1 << this->_bitsFra));
}

int Fixed::toInt(void) const
{
	return (this->_rawBit >> this->_bitsFra);
}

std::ostream &operator << (std::ostream &c_out, const Fixed &obj)
{
	//std::cout << "(overload of the insertion («) operator called)";
	c_out << obj.toFloat();
	return (c_out);
}
