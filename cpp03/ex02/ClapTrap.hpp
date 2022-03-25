/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:26:04 by joupark           #+#    #+#             */
/*   Updated: 2022/03/23 12:26:05 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
