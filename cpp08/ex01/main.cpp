#include "Span.hpp"

int	main()
{
	std::cout << "test1=================" << std::endl;
	Span	sp1(5);

	try
	{
		sp1.addNumber(5);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ntest2=================" << std::endl;
	Span	sp2(5);

	try
	{
		sp2.addNumber(5);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ntest3=================" << std::endl;
	Span	sp3(5);

	try
	{
		sp3.addNumber(5);
		sp3.addNumber(3);
		sp3.addNumber(17);
		sp3.addNumber(9);
		sp3.addNumber(11);
		sp3.addNumber(19);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}
}
