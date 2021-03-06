#include "Bureaucrat.hpp"

/* -----------------------------------------------------
|	Констурктор с параметрами, копирования и деструктор	|
-------------------------------------------------------- */

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & cp)
{
	this->operator=(cp);
}

Bureaucrat::~Bureaucrat(){}

/* -------------------------------------
|	Перегрузка оператора присваивания	|
---------------------------------------- */

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & cp)
{
	// this->_name = cp.getName();
	this->_grade = cp.getGrade();
	return *this;
}

/* ---------
|	Геттеры	|
------------ */

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* -----------------------------
|	Методы класса Bureaucrat	|
-------------------------------- */

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

/* -----------------------------
|	Перегрузка оператора вывода	|
-------------------------------- */

std::ostream& operator<< (std::ostream &out, const Bureaucrat &b)
{
	out << "Bureaucrat name is " << b.getName()
	<< " and his grade is " << b.getGrade();
	return out;
}

/* -----------------
|	Перегрузка what	|
-------------------- */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}