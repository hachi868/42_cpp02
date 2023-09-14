#ifndef __FIXED_H__
#define __FIXED_H__

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
	static std::string getMessageEq(void);

	bool operator > (const Fixed &obj) const;
	bool operator < (const Fixed &obj) const;
//	bool &operator >= (const Fixed &obj) const;
//	bool &operator <= (const Fixed &obj) const;
	bool operator == (const Fixed &obj) const;
//	bool &operator != (const Fixed &obj) const;
//
//	Fixed &operator + (const Fixed &obj);
//	Fixed &operator - (const Fixed &obj);
//	Fixed &operator * (const Fixed &obj);
//	Fixed &operator / (const Fixed &obj);
//
//	Fixed &operator ++ (const Fixed &obj);
//	Fixed &operator -- (const Fixed &obj);
//	Fixed &operator ++ (void);
//	Fixed &operator -- (void);

	static Fixed &min(Fixed &obj1, Fixed &obj2);
	static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
	static Fixed &max(Fixed &obj1, Fixed &obj2);
	static const Fixed &max(const Fixed &obj1, const Fixed &obj2);

private:
	int _rawBit;
	static const int	_bitsFra;
	static const std::string	_message_equal;
};

std::ostream &operator << (std::ostream &c_out, const Fixed &obj);

#endif //__FIXED_H__
