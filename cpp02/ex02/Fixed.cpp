#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0)
{
}

Fixed::Fixed(const int value)
{
	raw = value << bit;
}

Fixed::Fixed(const float value)
{
	raw = std::roundf(value * (1 << bit));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &second)
{
	if (this != &second)
		raw = second.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &second) const
{
	return getRawBits() > second.getRawBits();
}

bool Fixed::operator<(const Fixed &second) const
{
	return second > *this;
}

bool Fixed::operator>=(const Fixed &second) const
{
	return !(*this < second);
}

bool Fixed::operator<=(const Fixed &second) const
{
	return !(*this > second);
}

bool Fixed::operator==(const Fixed &second) const
{
	return getRawBits() == second.getRawBits();
}

bool Fixed::operator!=(const Fixed &second) const
{
	return !(*this == second);
}

Fixed Fixed::operator+(const Fixed &second) const
{
	Fixed f;

	f.setRawBits(getRawBits() + second.getRawBits());
	return f;
}

Fixed Fixed::operator-(const Fixed &second) const
{
	Fixed f;

	f.setRawBits(getRawBits() - second.getRawBits());
	return f;
}

Fixed Fixed::operator*(const Fixed &second) const
{
	return Fixed(toFloat() * second.toFloat());
}

Fixed Fixed::operator/(const Fixed &second) const
{
	if (second.getRawBits() == 0)
	{
		std::cerr << "Dividing by zero." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return Fixed(toFloat() / second.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++raw;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	--raw;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	--*this;
	return tmp;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	return (first > second) ? first : second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	return (first > second) ? first : second;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	return (first < second) ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	return (first < second) ? first : second;
}

int	Fixed::getRawBits(void) const
{
	return raw;
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

int Fixed::toInt(void) const
{
	return raw >> bit;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->raw) / (1 << bit);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}
