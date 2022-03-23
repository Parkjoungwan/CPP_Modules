#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP
#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap(std::string name);

		void			setAttackDamage(unsigned int);
		unsigned int	getAttackDamage(void) const;

		void	attack(std::string const &target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned int amount);

		ClapTrap	&operator=(ClapTrap const &other);

	protected:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif
