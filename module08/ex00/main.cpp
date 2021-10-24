#include "easyfind.hpp"

int	main()
{
	std::vector<int> myVector;

	std::srand(time(0));
	for (int count=0; count < 5; ++count)
		myVector.push_back(std::rand() % 100);
	myVector.push_back(10);
	try
	{
		easyfind(myVector, 10);
		easyfind(myVector, std::rand() % 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}