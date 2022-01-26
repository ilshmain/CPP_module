#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int					m_value;
    static const int	m_eight;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int fixed);
    Fixed(const float fixed);

    int		getRawBits(void) const;
    void	setRawBits(int const raw);

    float	toFloat(void) const;
    int		toInt(void) const;

    Fixed& operator=(const Fixed &fixed);

    bool operator>(const Fixed &fixed) const;
    bool operator<(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator==(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;

    Fixed operator+(const Fixed &fixed) const;
    Fixed operator-(const Fixed &fixed) const;
    Fixed operator*(const Fixed &fixed) const;
    Fixed operator/(const Fixed &fixed) const;

    Fixed	operator++(int);
    Fixed	operator++();
    Fixed	operator--(int);
    Fixed	operator--();

    static			Fixed& min(Fixed& A, Fixed& B);
    static			Fixed& max(Fixed& A, Fixed& B);
    static const	Fixed& min(const Fixed& A, const Fixed& B);
    static const	Fixed& max(const Fixed& A, const Fixed& B);

};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

# endif
