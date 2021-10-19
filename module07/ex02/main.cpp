#include "Array.hpp"

void	printSecond(Array<int> copy, Array<int> second)
{
	std::cout << "Copy array from [copy] to [second] : " << std::endl << std::endl;
	std::cout << "copy:	";

	for (unsigned int i = 0; i < copy.size(); ++i)
	{
		std::cout << "[" << copy[i] << "] ";
	}

	std::cout << std::endl <<"	 |    |    |    |    |";
	std::cout << std::endl <<"	 V    V    V    V    V";
	std::cout << std::endl << "second:	";

	for (unsigned int i = 0; i < second.size(); ++i)
	{
		std::cout << "[" << second[i] << "] ";
	}

	std::cout << std::endl;
}

void	printCheckArr(Array<int> second)
{
	std::cout << "check second[1]: " << std::endl;

	try
	{
		second[1];
		std::cerr << "OK" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<"-------------------" << std::endl;
}

void	printArr(Array<int> first)
{
	std::cout << "	Array [first] : " << std::endl;

	for (unsigned int i = 0; i < first.size(); ++i)
	{
		std::cout << "[" << first[i] << "] ";
	}

	std::cout << std::endl << std::endl;
}

void	printCopy(Array<int> copy, Array<int> first)
{
	std::cout << "Copy array from [first] to [copy] : " << std::endl << std::endl;
	std::cout << "first:	";

	for (unsigned int i = 0; i < copy.size(); ++i)
	{
		std::cout << "[" << first[i] << "] ";
	}

	std::cout << std::endl <<"	 |    |    |    |    |";
	std::cout << std::endl <<"	 V    V    V    V    V";
	std::cout << std::endl << "copy:	";

	for (unsigned int i = 0; i < copy.size(); ++i)
	{
		std::cout << "[" << copy[i] << "] ";
	}

	std::cout << std::endl << std::endl;
}

int	main()
{
	Array<int>	first(5);

	// Array<float> test(5);
	// for (unsigned int i = 0; i < test.size(); ++i)
	// {
	// 	test[i] = i + 0.21;
	// }

	srand(time(0));
	for (unsigned int i = 0; i < first.size(); ++i)
	{
		first[i] = rand() % 100;
	}

	printArr(first);

// ******************************************************************

	std::cout << "\x1b[32;1m	~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1b[32;1m	     First test" << std::endl;
	std::cout << "\x1b[32;1m	~~~~~~~~~~~~~~~~~~~~\x1b[0m" << std::endl;

	Array<int>	copy(first);
	// Array<float>	copy(test);

	printCopy(copy, first);

// ******************************************************************

	std::cout << "\x1b[32;1m	~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "\x1b[32;1m	     Second test" << std::endl;
	std::cout << "\x1b[32;1m	~~~~~~~~~~~~~~~~~~~~\x1b[0m" << std::endl;
	
	Array<int>	second;
	// Array<float>	second;

	std::cout << "empty array" << std::endl;
	printCheckArr(second);
	
	second = copy;
	printSecond(second, copy);

	std::cout << "array after copy" << std::endl;
	printCheckArr(second);

	return 0;
}
