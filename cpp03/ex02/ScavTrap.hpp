/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:25:46 by joupark           #+#    #+#             */
/*   Updated: 2022/03/23 12:25:47 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
