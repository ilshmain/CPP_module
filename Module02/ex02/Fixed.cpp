#include "Fixed.hpp"

const int	Fixed::m_eight = 8;

Fixed::Fixed() : m_value(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &fixed) {
    *(this) = fixed;
}

Fixed::Fixed(const int fixed)
{
    m_value = (fixed << m_eight);
}

Fixed::Fixed(const float fixed)
{
    m_value = roundf(fixed * (1 << m_eight));
}

int		Fixed::getRawBits(void) const {
    return (m_value);
}

void	Fixed::setRawBits(int const raw) {
    m_value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)m_value / (float)(1 << m_eight));
}

int Fixed::toInt(void) const
{
    return (m_value >> m_eight);
}

Fixed&	Fixed::operator=(const Fixed &fixed) {
    m_value = fixed.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed &fixed) const {
    return (toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const{
    return (toFloat() >= fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed) const{
    return (toFloat() > fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const{
    return (toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const{
    return (toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const{
    return (toFloat() != fixed.toFloat());
}

Fixed Fixed::operator+(const Fixed &fixed) const{
    Fixed dop(*this);
    dop.setRawBits(this->m_value + fixed.getRawBits());
    return (dop);
}

Fixed Fixed::operator-(const Fixed &fixed) const{
    Fixed dop(*this);
    dop.setRawBits(this->m_value - fixed.getRawBits());
    return (dop);
}

Fixed Fixed::operator*(const Fixed &fixed) const{
    Fixed dop(*this);
    dop.setRawBits(this->m_value * fixed.m_value/(1 << m_eight));
    return (dop);
}

Fixed Fixed::operator/(const Fixed &fixed) const{
    Fixed dop(*this);
    dop.setRawBits(this->m_value / fixed.getRawBits()*(1 << m_eight));
    return (dop);
}

Fixed Fixed::operator++(int) {
    Fixed dop(*this);
    this->m_value++;
    return dop;
}

Fixed Fixed::operator++() {
    this->m_value++;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed dop(*this);
    this->m_value--;
    return dop;
}

Fixed Fixed::operator--() {
    this->m_value--;
    return *this;
}

Fixed &Fixed::min(Fixed &A, Fixed &B) {
    return (A < B ? A : B);
}

Fixed &Fixed::max(Fixed &A, Fixed &B) {
    return (A > B ? A : B);
}

const Fixed &Fixed::min(const Fixed &A, const Fixed &B) {
    return (A < B ? A : B);
}

const Fixed &Fixed::max(const Fixed &A, const Fixed &B) {
    return (A > B ? A : B);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}
