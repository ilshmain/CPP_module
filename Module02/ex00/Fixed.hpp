#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed {
private:
	int rawBits;
	static const int bits;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator = (const Fixed &other);

	int getRawBits() const;
	void setRawBits(int rawBits);
};


#endif
