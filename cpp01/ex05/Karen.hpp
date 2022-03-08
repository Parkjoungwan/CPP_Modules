#ifndef	KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class	Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		std::string	_levels[4];
	public:
		void	complain(std::string	level);

		Karen(void);
		~Karen(void);
};

#endif
