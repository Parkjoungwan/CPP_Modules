#ifndef	HUMANB_HPP
#	define	HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon *_weapon;
		std::string	_name;

	public:
		void	attack();
		void	setWeapon(Weapon	&weapon);
		
		HumanB(std::string	name);
		~HumanB(void);
};

#endif
