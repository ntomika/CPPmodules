#include "contacts.hpp"

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

void	PhoneBook::AddContact()
{
	if (count == 8)
	{
		count = 0;
		list = -1;
	}
	contact[count].FirstName();
	contact[count].LastName();
	contact[count].Nickname();
	contact[count].PhoneNumber();
	contact[count].DarkestSecret();
	contact[count].index = count;
	std::cout << "Contact added successfully!" << std::endl << std::endl;
	count++;
}