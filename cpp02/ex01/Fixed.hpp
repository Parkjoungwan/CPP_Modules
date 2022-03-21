#ifndef	FIXED_HPP
# define	FIXED_HPP
# include <iostream>
# include <cmath>
# include <sstream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const	int	value);
		Fixed(const	float	value);
		Fixed(const	Fixed	&other);
		~Fixed(void);

		Fixed &operator=(const	Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const	raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					raw;
		static const int	bit = 8;
};

std::ostream	&operator<<(std::ostream &os, const Fixed	&f);

#endif
