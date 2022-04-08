/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:58:20 by joupark           #+#    #+#             */
/*   Updated: 2022/04/07 14:48:54 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat one("Hue");
	Bureaucrat two("Lone");

	std::cout << "making Bureaucrat==========" << std::endl;
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
	std::cout << "wrong form==========" << std::endl;
	try
	{
		Form formOne("one's form", 0, 1);
		std::cout << formOne << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() << std::endl;
	}
	try
	{
		Form formTwo("two's form", 151, 150);
		std::cout << formTwo << std::endl;
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() << std::endl;
	}

	std::cout << "right form==========" << std::endl;
	try
	{
		Form formOne("one's form", 1, 1);
		std::cout << formOne << std::endl;
		Form formTwo("two's form", 148, 150);
		std::cout << formTwo << std::endl;
		std::cout << "can't sign form==========" << std::endl;
		try
		{
			one.signForm(formOne);
			two.signForm(formTwo);
		}
		catch (std::exception	&err)
		{
			std::cerr << err.what() << std::endl;
		}
		std::cout << "can sign form==========" << std::endl;
		try 
		{
			one.increment();
			two.increment();
			one.signForm(formOne);
			two.signForm(formTwo);
		}
		catch (std::exception	&err)
		{
			std::cerr << err.what() << std::endl;
		}
	}
	catch (std::exception	&err)
	{
		std::cerr << err.what() << std::endl;
	}
}
