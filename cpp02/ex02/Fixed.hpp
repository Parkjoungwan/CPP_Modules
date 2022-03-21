#ifndef	FIXED_HPP
# define	FIXED_HPP
# include <iostream>
# include <cmath>
# include <sstream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const int		value);
		Fixed(const float	value);
		Fixed(const Fixed &other);
		~Fixed(void);

		Fixed &operator=(const Fixed &second);

		bool operator>(const Fixed &second) const;
		bool operator<(const Fixed &second) const;
		bool operator>=(const Fixed &second) const;
		bool operator<=(const Fixed &second) const;
		bool operator==(const Fixed &second) const;
		bool operator!=(const Fixed &second) const;

		Fixed operator+(const Fixed &second) const;
		Fixed operator-(const Fixed &second) const;
		Fixed operator*(const Fixed &second) const;
		Fixed operator/(const Fixed &second) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed &max(Fixed	&first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);
		static Fixed &min(Fixed	&first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);
	private:
		int					raw;
		static const int	bit = 8;
};

std::ostream	&operator<<(std::ostream	&os, const Fixed &f);

#endif
