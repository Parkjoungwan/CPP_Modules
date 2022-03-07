#include <iostream>
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter the command (ADD|SEARCH|EXIT): ";
		std::getline(std::cin, input);

		if (input == "EXIT")
			break;
		else if (input == "ADD")
			phonebook.ft_NewCon();
		else if (input == "SEARCH")
			phonebook.ft_FindCon();
		else
			std::cout << "Wrong Command!" << std::endl;
	}
	return (0);
}
