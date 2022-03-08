#include "Karen.hpp"

int	getLevel(std::string level)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			return (i);
	return (4);
}

int	main(int argc, char **argv)
{
	Karen	karen;
	int		level;

	if (argc < 2)
	{
		std::cout << "[ Karen doesn't say nothing! ]" << std::endl;
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "[ Karen say too much. Say one by one. ]" << std::endl;
		return (0);
	}
	level = getLevel(argv[1]);
	switch (level)
	{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break;
		case 4:
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
	}
	return (0);
}
