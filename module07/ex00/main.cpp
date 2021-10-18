#include "whatever.hpp"

int	main()
{
	{
		std::cout << "\x1b[32;1m	[swap]\x1b[0m" << std::endl;
		::swap(22, 11);
		::swap('a', 'b');
		::swap(2.2, 1.1);
		::swap("chaine1", "chaine2");
	}
	
	{
		std::cout << "\x1b[32;1m	[min]\x1b[0m" << std::endl;
		int min_int = ::min(10, 100);
		std::cout << "min = " << min_int << std::endl;
		double min_double = ::min(212.3, 342.2);
		std::cout << "min = " << min_double << std::endl;
		char min_char = ::min('*', '%');	// '*' = 42, '%' = 37
		std::cout << "min = " << min_char << std::endl;
		std::string str1 = ::min("chaine1", "chaine2");
		std::cout << "min = " << str1 << std::endl;
	}

	{
		std::cout << "\x1b[32;1m	[max]\x1b[0m" << std::endl;
		int max_int = ::max(10, 100);
		std::cout << "max = " << max_int << std::endl;
		double max_double = ::max(212.3, 342.2);
		std::cout << "max = " << max_double << std::endl;
		char max_char = ::max('*', '%');	// '*' = 42, '%' = 37
		std::cout << "max = " << max_char << std::endl;
		std::string str2 = ::max("chaine1", "chaine2");
		std::cout << "max = " << str2 << std::endl;
	}



	// Awesome a(2), b(4);
	// std::cout << "\x1b[32;1m	[complex types]\x1b[0m" << std::endl;
	// swap(a, b);
	// Awesome max_value = max(a, b);
	// std::cout << "max = " << max_value << std::endl;
	// Awesome min_value = max(a, b);
	// std::cout << "min = " << min_value << std::endl;

	return 0;
}