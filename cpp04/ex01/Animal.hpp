#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal
{
	public:
		Animal();
		Animal(const Animal	&other);
		virtual	~Animal();

		void			setType(std::string	type);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		const Animal& operator=(const Animal &other);

	protected:
		std::string	type;
};
#endif
