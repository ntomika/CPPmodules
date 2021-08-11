#include "PhoneBook.hpp"

ContactData::ContactData(){}
ContactData::~ContactData(){}

void	ContactData::FirstName()
{
	std::cout << "Enter your first name: ";
	std::getline (std::cin, first_name);
}

void	ContactData::LastName()
{
	std::cout << "Enter your last name: ";
	std::getline (std::cin, last_name);
}

void	ContactData::Nickname()
{
	std::cout << "Enter your nickname: ";
	std::getline (std::cin, nickname);
}

void	ContactData::PhoneNumber()
{
	std::cout << "Enter your phone number: ";
	std::getline (std::cin, phone_number);
}

void	ContactData::DarkestSecret()
{
	std::cout << "Enter your darkest secret: ";
	std::getline (std::cin, darkest_secret);
}

int		ContactData::GetInfo()
{
	if (first_name.size() == 0 && last_name.size() == 0
		&& nickname.size() == 0 && phone_number.size() == 0
		&&darkest_secret.size() == 0)
	{
		std::cout << "Сontact information is empty" << std::endl;
		return 0;
	}
	std::cout << "~~~~~~~" << std::endl;
	std::cout << "First name:	" << first_name << std::endl;
	std::cout << "Last name:	" <<last_name << std::endl;
	std::cout << "Nickname:	" << nickname << std::endl;
	std::cout << "Phone number:	" << phone_number << std::endl;
	std::cout << "Darkest secret:	" << darkest_secret << std::endl;
	std::cout << "~~~~~~~" << std::endl;
	return 1;
}

void	ContactData::CheckSize(std::string name)
{
	int	c;

	c = name.size();
	if (c < 10)
		std::cout << std::setfill(' ') << std::setw(10) << name;
	else
	{
		std::cout << std::setw(9) << name.substr(0, 9);
		std::cout << '.';
	}
}

void	ContactData::PrintAllBook(int index)
{
	std::cout << std::setw(10) << index << '|';
	CheckSize(first_name);
	std::cout << '|';
	CheckSize(last_name);
	std::cout << '|';
	CheckSize(nickname);
	std::cout << std::endl;
}
