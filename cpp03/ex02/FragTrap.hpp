/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:25:53 by joupark           #+#    #+#             */
/*   Updated: 2022/03/28 16:07:42 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FARGTRAP_HPP
#define FARGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap(std::string name);

		void		highFivesGuys(void);

		FragTrap	&operator=(FragTrap const	&other);
};

#endif
