#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal
{
	public:
		virtual	~Animal();

	protected:
		std::string	type;

		Animal();
		Animal(const Animal	&other);

		void			setType(std::string	type);
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

		const Animal& operator=(const Animal &other);
};
#endif
