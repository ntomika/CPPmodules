#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat b1("John", 150);
	std::cout << b1 << std::endl;
	try
	{
		b1.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b1 << std::endl << std::endl;


	Bureaucrat b2("Sam", 1);
	std::cout << b2 << std::endl;
	try
	{
		b2.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b2 << std::endl << std::endl;


	try
	{
		Bureaucrat b3("Alex", 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;


	Bureaucrat b4("Poul", 40);
	std::cout << b4 << std::endl;
	try
	{
		b4.incrementGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b4 << std::endl;

	Bureaucrat b5("Bob", 40);
	std::cout << b5 << std::endl;
	try
	{
		b5.decrementGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b5 << std::endl;

	return 0;
}