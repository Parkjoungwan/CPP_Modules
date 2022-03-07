#ifndef	WEAPON_HPP
# define	WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string	_type;
	
	public:
		void	setType(std::string	type);
		std::string	&getType(void);
		
		Weapon(std::string	type);
		Weapon(void);
		~Weapon(void);
};

#endif
