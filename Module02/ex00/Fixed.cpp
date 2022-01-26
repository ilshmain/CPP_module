#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : rawBits(0) {
	std::cout << "Default constructor called" <<std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" <<std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" <<std::endl;
	return rawBits;
}

void Fixed::setRawBits(int rawBits) {
	Fixed::rawBits = rawBits;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" <<std::endl;
	*(this) = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" <<std::endl;
	this->rawBits = other.getRawBits();
	return *this;
}