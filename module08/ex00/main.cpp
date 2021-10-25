#include "easyfind.hpp"

void	print(int a)
{
	std::cout << a << " ";
}

int	main()
{
	std::cout << "\x1b[32;1m	[vector test]\x1b[0m" << std::endl;

	std::vector<int> myVector;

	std::srand(time(0));
	for (int count=0; count < 5; ++count)
		myVector.push_back(std::rand() % 100);
	
	myVector.push_back(10);
	myVector.push_back(15);
	myVector.push_back(30);
	
	std::cout << "Array: " << std::endl;
	std::for_each(myVector.begin(), myVector.end(), print);
	
	std::cout << std::endl;
	try
	{
		std::vector<int>::iterator tmp = easyfind(myVector, 10);
		std::cout << "array starting at: " << std::endl;
		std::for_each(tmp, myVector.end(), print);

		std::cout << std::endl << std::endl;

		tmp = easyfind(myVector, std::rand() % 100);
		std::cout << "array starting at: " << std::endl;
		std::for_each(tmp, myVector.end(), print);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "\x1b[32;1m	[set test]\x1b[0m" << std::endl;

	std::set<int> mySet;

	for (int count=0; count < 7; ++count)
		mySet.insert(count);

	std::cout << "Array: " << std::endl;
	std::for_each(mySet.begin(), mySet.end(), print);
	
	std::cout << std::endl;
	try
	{
		std::set<int>::iterator tmp = easyfind(mySet, 2);
		std::cout << "array starting at: " << std::endl;
		std::for_each(tmp, mySet.end(), print);

		std::cout << std::endl << std::endl;

		tmp = easyfind(mySet, 10);
		std::cout << "array starting at: " << std::endl;
		std::for_each(tmp, mySet.end(), print);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}