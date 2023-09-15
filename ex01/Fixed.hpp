#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int num_i);
	Fixed(const float num_fl);
	Fixed &operator = (const Fixed &obj);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
private:
	int _rawNum;
	static const int	_digitBits;
};

std::ostream &operator << (std::ostream &c_out, const Fixed &obj);

#endif //__FIXED_H__
