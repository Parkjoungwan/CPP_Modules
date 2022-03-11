#ifndef	FIXED_HPP
# define	FIXED_HPP
# include <iostream>
# include <cmath>
# include <sstream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int	value);
		Fixed(const Fixed &other);
		~Fixed(void);

		Fixed &operator=(const Fixed &rhs);

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
}
