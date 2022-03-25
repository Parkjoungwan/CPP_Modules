/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:25:53 by joupark           #+#    #+#             */
/*   Updated: 2022/03/25 14:37:12 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FARGTRAP_HPP
#define FARGTRAP_HPP
#include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap(std::string name);

		std::string	getName(void);
		void		highFivesGuys(void);

		FragTrap	&operator=(FragTrap const	&other);
};

#endif
