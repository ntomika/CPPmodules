#include "convert.hpp"

void	output(char *s)
{
	// std::cout << "string:	" << s << std::endl;

	std::cout << "char:	";
	convert_char(s);
	std::cout << "int:	";
	convert_int(s);
	std::cout << "float:	";
	convert_float(s);
	std::cout << "double:	";
	convert_double(s);
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