#include "Karen.hpp"

enum level 
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	OTHER
};

level checkLevel(std::string type)
{
	level	ret = OTHER;
	if (type == "DEBUG")
		ret = DEBUG;
	if (type == "INFO")
		ret = INFO;
	if (type == "WARNING")
		ret = WARNING;
	if (type == "ERROR")
		ret = ERROR;
	return ret;
}

int	main(int ac, char **av)
{
	Karen karen;
	
	if (ac != 2)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return 1;
	}	
	switch (checkLevel(av[1]))
	{
	case DEBUG:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
	case INFO:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
	case WARNING:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
	case ERROR:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl << std::endl;
	}
	return 0;
}