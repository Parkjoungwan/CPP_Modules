/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:58:20 by joupark           #+#    #+#             */
/*   Updated: 2022/04/08 13:54:37 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat one("Hue");
	Bureaucrat two("Lone");
	Bureaucrat three("Jack");

	std::cout << "making Bureaucrat==========" << std::endl;
	try
	{
		one.setGrade(137);
		std::cout << one << std::endl;
		two.setGrade(45);
		std::cout << two << std::endl;
		three.setGrade(5);
		std::cout << three << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
	std::cout << "making Forms==========" << std::endl;
	Form	*formOne = new PresidentialPardonForm("Hue");
	Form	*formTwo = new RobotomyRequestForm("Lone");
	Form	*formThree = new ShrubberyCreationForm("Jack");
	std::cout << *formOne << std::endl;
	std::cout << *formTwo << std::endl;
	std::cout << *formThree << std::endl;
	try
	{
		one.signForm(*formOne);
		two.signForm(*formTwo);
		three.signForm(*formThree);
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
	std::cout << "executing Forms==========" << std::endl;
	try
	{
		one.executeForm(*formOne);
		two.executeForm(*formTwo);
		three.executeForm(*formThree);
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
}
