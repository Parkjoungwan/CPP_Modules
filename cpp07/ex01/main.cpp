#include "iter.hpp"

int		main()
{
	int		testArray1[5] = {1, 2, 3, 4, 5};
	float	testArray2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char	testArray3[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "test1: ";
	iter<int>(testArray1, 5, printData);
	std::cout << "\ntest2: ";
	iter<float>(testArray2, 5, printData);
	std::cout << "\ntest3: ";
	iter<char>(testArray3, 5, printData);
	
	return (0);
}
