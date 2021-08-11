#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void	PhoneBook::Start()
{
	this->count = 0;
}

int	main()
{
	std::string	command;
	PhoneBook	book;
	ContactData	contact;

	book.Start();
	while (1)
	{
		std::cout << "Select an option [ADD, SEARCH, EXIT]: ";
		std::getline (std::cin, command);
		if (std::cin.eof())
			return (0);
		std::cin.ignore(command.max_size(), '\n');
		if (command == "EXIT")
		{
			std::cout << "You left the program. All contact data has been lost." << std::endl;
			break ;
		}
		else if (command == "ADD")
			book.AddContact();
		else if (command == "SEARCH")
			book.SearchContact();
		else
			std::cout << "The command is not available. Try again." << std::endl;
	}
	return 0;
}