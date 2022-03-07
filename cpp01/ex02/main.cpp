#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "adress of the string: " << &str << std::endl;
	std::cout << "adress in stringPTR: " << stringPTR << std::endl;
	std::cout << "adress in stringREF: " << &stringREF << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "value of the string: " << str << std::endl;
	std::cout << "value of stringPTR pointed: " << *stringPTR << std::endl;
	std::cout << "value of stringREF pointed: " << stringREF << std::endl;

}
