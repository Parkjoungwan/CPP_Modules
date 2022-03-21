#include "Fixed.hpp"

Fixed::Fixed(void): raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int	value)
{
	std::cout << "Int constructor called" << std::endl;
	raw = value << bit;
}

Fixed::Fixed(const float	value)
{
	std::cout << "Float constructor called" << std::endl;
	raw = std::roundf(value * (1 << bit));
}

Fixed::Fixed(const Fixed	&other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed	&rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignation operator called" << std::endl;
		raw = rhs.getRawBits();
	}
	return	*this;
}

int	Fixed::getRawBits(void) const
{
	return	raw;
}

int	Fixed::toInt(void) const
{
	return raw >> bit;
}

float	Fixed::toFloat(void) const
{
	return	static_cast<float>(this->raw) / (1 << bit);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}
