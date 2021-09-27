#include "convert.hpp"

void	convert_char(char *s)
{
	char	b;
	double	a;

	a = std::strtod(s, nullptr);
	if (errno == ERANGE || a > SCHAR_MAX || a < SCHAR_MIN)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	b = static_cast<char>(a);
	if (b >= 32 && b <= 127)
		std::cout << b << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}