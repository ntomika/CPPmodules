#include "contacts.hpp"

void	ContactData::CheckSize(std::string name)
{
	int	c;

	c = name.size();
	if (c < 10)
		std::cout << std::setw(10 - c) << ' ' << name;
	else
	{
		std::cout << std::setw(9) << name.substr(0, 9);
		std::cout << '.';
	}
}

void	ContactData::PrintAllBook()
{
	std::cout << std::setw(10) << index << '|';
	CheckSize(first_name);
	std::cout << '|';
	CheckSize(last_name);
	std::cout << '|';
	CheckSize(nickname);
	std::cout << std::endl;
}

void	ContactData::GetInfo()
{
	std::cout << "Info about contact " << index << ":" << std::endl;
	std::cout << "~~~~~~~" << std::endl;
	std::cout << "First name:	" << first_name << std::endl;
	std::cout << "Last name:	" <<last_name << std::endl;
	std::cout << "Nickname:	" << nickname << std::endl;
	std::cout << "Phone number:	" << phone_number << std::endl;
	std::cout << "Darkest secret:	" << darkest_secret << std::endl;
	std::cout << "~~~~~~~" << std::endl;
}

void	PhoneBook::SearchContact()
{
	int			i;
	std::string	s;

	i = -1;
	if (count == 0)
	{
		std::cout << "Сontact list is empty." << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (++i < 8)
		contact[i].PrintAllBook();
	while (1)
	{
		std::cout << "Select contact index: ";
		std::getline(std::cin, s);
		if (s.size() != 1 && !(s[0] >= 48 && s[0] <= 55))
			std::cout << "Wrong index!" << std::endl;
		else
		{
			contact[s[0] - '0'].GetInfo();
			break ;
		}
	}
}