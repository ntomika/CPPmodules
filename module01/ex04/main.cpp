#include <string>
#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string		str;
	std::string		s1;
	std::string		s2;
	std::string		fileName;

	if (ac != 4)
	{
		std::cout << "Bad number of arguments" << std::endl;
		return 1;
	}

	fileName = av[1];
	fileName += ".replace";
	s1 = av[2];
	s2 = av[3];
	std::ifstream read(av[1]);
	if (!read)
	{
		std::cout << "File did not open" << std::endl;
		return 1;
	}
	std::ofstream write(fileName);
	if (!write)
	{
		std::cout << "File did not open" << std::endl;
		return 1;
	}
	while (!read.eof())
	{
		getline(read, str);
		std::size_t pos = str.find(s1, 0);
		if (pos == std::string::npos)
		{
			write << str << std::endl;
		}
		else
		{
			write << str.substr(0, pos);
			write << s2;
			write << str.substr((pos + s1.size())) << std::endl;
		}
	}
	read.close();
	write.close();
	return 0;
}