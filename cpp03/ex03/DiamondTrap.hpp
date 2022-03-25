/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:07:10 by joupark           #+#    #+#             */
/*   Updated: 2022/03/25 14:37:36 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(std::string input);

		void		attack(std::string const	&target);
		void		whoAmI(void);

		DiamondTrap &operator=(DiamondTrap const	&other);

	private:
		std::string	name;
};

#endif
