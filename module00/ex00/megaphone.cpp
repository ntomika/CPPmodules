#include <iostream>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	if (ac > 1)
	{
		i = 0;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
			{
				if (av[i][j] >= 97 && av[i][j] <= 122)
				{
					c = av[i][j] - 32;
					std::cout << c;
				}
				else
					std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}