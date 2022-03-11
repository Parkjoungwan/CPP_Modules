#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
	{
		std::cout << "Assignation operator called" << std::endl;
		raw = rhs.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw);
}

void	Fixed::setRawBits(int const	raw)
{
	this->raw = raw;
}
