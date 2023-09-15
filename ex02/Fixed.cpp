#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::_digitBits = 8;
const std::string	Fixed::_message_equal = "(The two arguments have the same value.) : ";

Fixed::Fixed() : _rawNum(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int num_i) : _rawNum(num_i << this->_digitBits)
{
	//std::cout << "Int constructor called" << this -> getRawBits() << std::endl;
}

Fixed::Fixed(const float num_fl) : _rawNum(roundf(num_fl * (1 << this->_digitBits)))
{
	//std::cout << "Float constructor called" << this -> getRawBits() << std::endl;
}

Fixed &Fixed::operator = (const Fixed &obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called : " << this->_rawNum << std::endl;
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

std::string Fixed::getMessageEq(void)
{
	return (_message_equal);
}

bool Fixed::operator > (const Fixed &obj) const
{
	if (this->toFloat() > obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator < (const Fixed &obj) const
{
	if (this->toFloat() < obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator >= (const Fixed &obj) const
{
	if (this->toFloat() >= obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator <= (const Fixed &obj) const
{
	if (this->toFloat() <= obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator == (const Fixed &obj) const
{
	if (this->toFloat() == obj.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &obj) const
{
	if (this->toFloat() != obj.toFloat())
		return (true);
	return (false);
}

float Fixed::operator + (const Fixed &obj)
{
	return (this->toFloat() + obj.toFloat());
}

float Fixed::operator - (const Fixed &obj)
{
	return (this->toFloat() - obj.toFloat());
}

float Fixed::operator * (const Fixed &obj)
{
	return (this->toFloat() * obj.toFloat());
}

float Fixed::operator / (const Fixed &obj)
{
	if (obj.toFloat() == 0)
		std::cout << "(division by 0) : ";
	return (this->toFloat() / obj.toFloat());
}

Fixed Fixed::operator ++ (int num)
{
	(void)num;
	Fixed tmp = Fixed(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}
Fixed Fixed::operator -- (int num)
{
	(void)num;
	Fixed tmp = Fixed(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}
Fixed &Fixed::operator ++ (void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}
Fixed &Fixed::operator -- (void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 == obj2)
		std::cout << getMessageEq();
	return ((obj1 < obj2) ? obj1 : obj2);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 == obj2)
		std::cout << getMessageEq();
	return ((obj1 < obj2) ? obj1 : obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 == obj2)
		std::cout << getMessageEq();
	return ((obj1 > obj2) ? obj1 : obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 == obj2)
		std::cout << getMessageEq();
	return ((obj1 > obj2) ? obj1 : obj2);
}

std::ostream &operator << (std::ostream &c_out, const Fixed &obj)
{
	//std::cout << "(overload of the insertion («) operator called)";
	c_out << obj.toFloat();
	return (c_out);
}
