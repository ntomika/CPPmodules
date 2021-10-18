#include "iter.hpp"

int	main()
{
	int		intArray[5] = {1, 2, 3, 42, 21};
	float	floatArray[5] = {423.2134, 78.2314, 214.3241, 345.341, 21.42};
	char	charArray[9] = "test21";

	{
		std::cout << "\x1b[32;1m [int] array: \x1b[0m" << std::endl;
		iter(intArray, 5, printArr);
		std::cout << std::endl;
	}

	{
		std::cout << "\x1b[32;1m [float] array: \x1b[0m" << std::endl;
		iter(floatArray, 5, printArr);
		std::cout << std::endl;
	}

	{
		std::cout << "\x1b[32;1m [char] array: \x1b[0m" << std::endl;
		iter(charArray, 6, printArr);
		std::cout << std::endl;
	}

	// {
	// 	int tab[] = { 0, 1, 2, 3, 4 }; 
	// 	Awesome tab2[5];

	// 	std::cout << "\x1b[32;1m [check_list] array: \x1b[0m" << std::endl;
	// 	iter(tab, 5, print );
	// 	iter(tab2, 5, print );
	// }

	return 0;
}