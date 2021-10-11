#include "Bureaucrat.hpp"
#include "Form.hpp"

void testBureaucrat()
{
	Bureaucrat b1("John", 150);
	std::cout << b1 << std::endl;
	try
	{
		b1.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b1 << std::endl << std::endl;


	Bureaucrat b2("Poul", 40);
	std::cout << b2 << std::endl;
	try
	{
		b2.incrementGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b2 << std::endl;


	std::cout << std::endl;
	try
	{
		Bureaucrat b3("Alex", 0);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void	testForm()
{
	Form f1("Biba", 100, 50);
	Form f2("Boba", 50, 100);

	Bureaucrat b1("John", 110);
	Bureaucrat b2("Poul", 40);

	std::cout << f1 << std::endl;
	b1.signForm(f1);
	std::cout << std::endl;

	std::cout << f2 << std::endl;
	b2.signForm(f2);

}

int	main()
{
	testBureaucrat();
	testForm();

	return 0;
}