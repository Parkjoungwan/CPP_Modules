#ifndef	SACVTRAP_HPP
#define	SACVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap	&other);
		ScavTrap(std::string name);

		void		guardGate(void);
		void		attack(const std::string	&target);

		ScavTrap	&operator=(const ScavTrap	&other);
};

#endif
