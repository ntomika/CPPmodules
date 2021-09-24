#include <iostream>

void	output(char *s)
{
	std::cout << "string:	" << s << std::endl;
	std::cout << "char:	" << std::endl;
	std::cout << "int:	" << std::endl;
	std::cout << "float:	" << std::endl;
	std::cout << "double:	" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Wrong input value!" << std::endl;
	else
	{
		output(av[1]);
	}
	return 0;
}