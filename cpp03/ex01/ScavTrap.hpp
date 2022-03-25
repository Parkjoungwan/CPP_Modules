#ifndef	SACVTRAP_HPP
#define	SACVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public	ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap	&other);
		ScavTrap(std::string name);

		std::string	getName(void) const;
		void		guardGate(void);
		void		attack(std::string const &target);

		ScavTrap	&operator=(ScavTrap const &other);
};

#endif
