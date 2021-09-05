#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & cp)
{
	this->operator=(cp);
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & cp)
{
	// this->_name = cp.getName();
	this->_grade = cp.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade++;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &b)
{
	out << "Bureaucrat name is " << b.getName()
	<< " and his grade is " << b.getGrade();
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}