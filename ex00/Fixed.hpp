#ifndef __FIXED_H__
#define __FIXED_H__

class Fixed {
public:
	Fixed();
	Fixed::Fixed(const Fixed &obj);
	Fixed &operator = (const Fixed &obj);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
private:
	int	_numFixed;
	static const int	_bitsFra;

};

#endif //__FIXED_H__
