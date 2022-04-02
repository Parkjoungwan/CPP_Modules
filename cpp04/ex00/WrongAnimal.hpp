#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal	&other);
		virtual ~WrongAnimal();

		void		setType(std::string	type);
		std::string	getType() const;

		void				makeSound() const;
		const WrongAnimal	&operator=(const WrongAnimal	&other);

	protected:
		std::string	type;
};

#endif
