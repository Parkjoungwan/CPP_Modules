/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:58:20 by joupark           #+#    #+#             */
/*   Updated: 2022/04/12 13:34:55 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern		internHuman;
	std::string	target = "Park";
	{
		Form		*formToMake;

		formToMake = internHuman.makeForm("shrubbery creation", target);
		if (formToMake)
			std::cout << *formToMake << std::endl;
		delete formToMake;
	}
	{
		Form		*formToMake;

		formToMake = internHuman.makeForm("presidential pardon", target);
		if (formToMake)
			std::cout << *formToMake << std::endl;
		delete formToMake;
	}
	{
		Form		*formToMake;

		formToMake = internHuman.makeForm("robotomy request", target);
		if (formToMake)
			std::cout << *formToMake << std::endl;
		delete formToMake;
	}
	{
		Form		*formToMake;

		formToMake = internHuman.makeForm("whwhwhwhwh", target);
		if (formToMake)
			std::cout << *formToMake << std::endl;
		delete formToMake;
	}
}
