#include "PhoneBook.hpp"

void	PhoneBook::AddContact()
{
	if (count == 8)
		this->count = 0;
	contact[count].FirstName();
	contact[count].LastName();
	contact[count].Nickname();
	contact[count].PhoneNumber();
	contact[count].DarkestSecret();
	std::cout << "Contact added successfully!" << std::endl << std::endl;
	this->count++;
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
	std::cout << "---------- ---------- ---------- ----------" << std::endl;
	while (++i < 8)
		contact[i].PrintAllBook(i);
	while (1)
	{
		std::cout << "Select contact index: ";
		std::getline(std::cin, s);
		if (!(s[0] >= 48 && s[0] <= 55) || s.size() != 1)
			std::cout << "Wrong index!" << std::endl;
		else
		{
			if (contact[s[0] - '0'].GetInfo() == 1)
				break ;
			else
				continue ;
		}
	}
}