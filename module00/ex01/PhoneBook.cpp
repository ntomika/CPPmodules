#include "Contacts.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

int	main()
{
	std::string command;
	PhoneBook	book;

	book.count = 0;
	while (1)
	{
		std::cout << "Select an option [ADD, SEARCH, EXIT]: ";
		std::getline (std::cin, command);
		std::cin.ignore(command.max_size(), '\n');
		if (command == "EXIT")
		{
			std::cout << "You left the program." << std::endl;
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