#include "Array.hpp"

int	main()
{
	std::cout << "test1============================" << std::endl;
	Array<int> const test1;

	std::cout << "size: " << test1.size() << std::endl;
	try
	{
		std::cout << "test1[0]: " << test1[0] << std::endl;
	}
	catch(std::exception const	&err)
	{
		std::cout << err.what() << std::endl;
	}

	std::cout << "\ntest2============================" << std::endl;
	Array<float> const test2(10);

	std::cout << "size: " << test2.size() << std::endl;
	try
	{
		std::cout << "test2[0]: " << test2[0] << std::endl;
		std::cout << "test2[5]: " << test2[5] << std::endl;
		std::cout << "test2[10]: " << test2[10] << std::endl;
	}
	catch(std::exception const	&err)
	{
		std::cout << err.what() << std::endl;
	}

	std::cout << "\ntest3============================" << std::endl;
	Array<int> const test3(10);

	std::cout << "size: " << test3.size() << std::endl;
	try
	{
		for (unsigned int i = 0; i < test3.size(); i++)
		{
			test3[i] = i + 1;
		}
		for (unsigned int i = 0; i < test3.size(); i++)
		{
			std::cout << "test[" << i << "] : " << test3[i] << std::endl;
		}
	}
	catch(std::exception const	&err)
	{
		std::cout << err.what() << std::endl;
	}
	std::cout << "\ntest3============================" << std::endl;
	Array<int> const test4(test3);
	std::cout << "size: " << test4.size() << std::endl;
	try
	{
		for (unsigned int i = 0; i < test3.size(); i++)
		{
			test3[i] = i + 1;
		}
		for (unsigned int i = 0; i < test4.size(); i++)
		{
			std::cout << "test[" << i << "] : " << test4[i] << std::endl;
		}
	}
	catch(std::exception const	&err)
	{
		std::cout << err.what() << std::endl;
	}
}
