#include "convert.hpp"

int	getDecimalPart(char *s)
{
	int	i = 0;
	int	j;

	while (s[i] != '.' && s[i])
		i++;
	j = i + 1;
	while (s[j] && isdigit(s[j]))
		j++;
	j = j - i;
	if (((int)strlen(s)) == i || j == 1)
		return 1;
	else
		return (j - 1);
}

int	check_nan(int type, char *s)
{
	if (strcmp("-nan", s) == 0)
	{
		std::cout << "impossible" << std::endl;
		return 0;
	}
	if (strcmp("nan", s) != 0)
		return 1;
	if (type == CHAR)
		std::cout << "impossible" << std::endl;
	if (type == INT)
		std::cout << "impossible" << std::endl;
	if (type == FLOAT)
		std::cout << "nanf" << std::endl;
	if (type == DOUBLE)
		std::cout << "nan" << std::endl;
	return 0;
}

int	check_inf(int type, char *s)
{
	if(strcmp("inf", s) != 0 && strcmp("-inf", s) != 0 && strcmp("+inf", s) != 0)
		return 1;
	if (type == CHAR)
		std::cout << "impossible" << std::endl;
	if (type == INT)
		std::cout << "impossible" << std::endl;
	if (type == FLOAT)
	{
		if (!strcmp("inf", s))
			std::cout << "inf" << std::endl;
		else if (!strcmp("-inf", s))
			std::cout << "-inf" << std::endl;
		else if (!strcmp("+inf", s))
			std::cout << "+inf" << std::endl;
	}
	if (type == DOUBLE)
	{
		if (!strcmp("inf", s))
			std::cout << "inf" << std::endl;
		else if (!strcmp("-inf", s))
			std::cout << "-inf" << std::endl;
		else if (!strcmp("+inf", s))
			std::cout << "+inf" << std::endl;
	}
	return 0;
}