#include "convert.hpp"

void	convert_char(char *s)
{
	char	c;
	double	d;

	if (!(check_nan(CHAR, s)) || !(check_inf(CHAR, s)))
		return ;
	d = std::strtod(s, nullptr);
	if (errno == ERANGE || d > SCHAR_MAX || d < SCHAR_MIN || (d == 0 && s[0] != '0'))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	c = static_cast<char>(d);
	if (c >= 32 && c <= 127)
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	convert_int(char *s)
{
	double	d;
	int		i;

	if (!(check_nan(INT, s)) || !(check_inf(INT, s)))
		return ;
	d = std::strtod(s, nullptr);
	if (errno == ERANGE || d > INT_MAX || d < INT_MIN || (s[0] != '0' && d == 0.0))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	i = static_cast<int>(d);
	std::cout << i << std::endl;
}

void	convert_float(char *s)
{
	double	d;
	float	f;
	int		decimalPart;

	if (!(check_nan(FLOAT, s)) || !(check_inf(FLOAT, s)))
		return ;
	d = std::strtod(s, nullptr);
	if (errno == ERANGE || (d == 0.0 && s[0] != '0'))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	decimalPart = getDecimalPart(s);
	f = static_cast<float>(d);
	std::cout << std::fixed << std::setprecision(decimalPart)
	<< f << "f" << std::endl;
}
void	convert_double(char *s)
{
	double	d;
	int		decimalPart;

	if (!(check_nan(DOUBLE, s)) || !(check_inf(DOUBLE, s)))
		return ;
	d = std::strtod(s, nullptr);
	if (errno == ERANGE || (d == 0.0 && s[0] != '0'))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	decimalPart = getDecimalPart(s);
	std::cout << std::fixed << std::setprecision(decimalPart);
	std::cout << d << std::endl;
}