/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:58:20 by joupark           #+#    #+#             */
/*   Updated: 2022/04/07 13:27:20 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat one("Hue");
	Bureaucrat two("Lone");

	std::cout << "Exception check==========" << std::endl;
	try
	{
		one.setGrade(0);
		std::cout << one << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
	try
	{
		two.setGrade(151);
		std::cout << two << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
	std::cout << "working check==========" << std::endl;
	try
	{
		one.setGrade(2);
		std::cout << one << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
	try
	{
		two.setGrade(149);
		std::cout << two << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() <<std::endl;	
	}
	std::cout << "increase check==========" << std::endl;
	while (1) {
		try
		{
			one.increment();
			std::cout << one << std::endl;
		}
		catch (std::exception	&err)
		{
			std::cerr << err.what() << std::endl;
			break ;
		}
	}
	std::cout << "decrease check==========" << std::endl;
	while (1) {
		try
		{
			two.decrement();
			std::cout << two << std::endl;
		}
		catch (std::exception	&err)
		{
			std::cerr << err.what() << std::endl;
			break ;
		}
	}
}
