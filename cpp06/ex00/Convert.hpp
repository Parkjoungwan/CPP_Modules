#ifndef	CONVERT_HPP
#define	CONVERT_HPP

#include <iostream>
#include <string>

class Convert
{
	public:
		Convert(const char	*input);
		Convert(Convert const	&other);
		~Convert();

		Convert	const	&operator=(Convert const	&other);
		char			getChar() const;
		int				getInt() const;
		float			getFloat() const;
		double			getDouble() const;

		class NonDisplayableException: public std::exception
		{
			virtual const char	*what() const throw();
		};
		class ImpossibleException: public std::exception
		{
			virtual	const char	*what() const throw();
		};
	private:
		std::string	input;
};

std::ostream	&operator<<(std::ostream	&out, Convert const	&convert);

#endif
