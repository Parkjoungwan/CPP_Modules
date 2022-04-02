#ifndef	CAT_HPP
#define	CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public	Animal
{
	public:
		Cat();
		Cat(const Cat	&other);
		virtual ~Cat();

		virtual	void	makeSound(void) const;
		const Cat	&operator=(const Cat	&other);
	
	private:
		Brain *catBrain;
};

#endif
