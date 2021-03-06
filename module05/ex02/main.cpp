#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testForm()
{
	ShrubberyCreationForm house("house");
	RobotomyRequestForm robot("robot");
	PresidentialPardonForm president("Vovka");
	Bureaucrat b1("John", 5);

	try
	{
		b1.executeForm(house);
		b1.executeForm(robot);
		b1.executeForm(president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

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
}

int	main()
{
	std::cout << "\x1b[32;1m	Test <Bureaucrat>: \x1b[0m" << std::endl;
	testBureaucrat();

	std::cout << "\x1b[32;1m	Test <Form>: \x1b[0m" << std::endl;
	testForm();

	return 0;
}