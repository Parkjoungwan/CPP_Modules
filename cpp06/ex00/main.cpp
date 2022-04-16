#include "Convert.hpp"

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		std::cout << "Need only one argument." << std::endl;
		return	(1);
	}
	Convert	converter(argv[1]);
	std::cout << converter << std::endl;

	return(0);
}
