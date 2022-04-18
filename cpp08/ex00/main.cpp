#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int>	vec;
	vec.push_back(0);
	vec.push_back(3);
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(4);

	try
	{
		easyfind(vec, 4);
		std::cout << "I found it!" << std::endl;
	}
	catch(std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind(vec, 5);
		std::cout << "I found it!" << std::endl;
	}
	catch(std::exception	&e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
