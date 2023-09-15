#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_digitBits = 8;

Fixed::Fixed() : _rawNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int num_i) : _rawNum(num_i << this->_digitBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num_fl) : _rawNum((int)roundf(num_fl * (1 << this->_digitBits)))
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
	return (this->_rawNum);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_rawNum = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_rawNum / (1 << this->_digitBits));
}

int Fixed::toInt(void) const
{
	return (this->_rawNum >> this->_digitBits);
}

std::ostream &operator << (std::ostream &c_out, const Fixed &obj)
{
	//std::cout << "(overload of the insertion («) operator called)";
	c_out << obj.toFloat();
	return (c_out);
}
