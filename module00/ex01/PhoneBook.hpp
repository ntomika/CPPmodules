#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ContactData.hpp"

class PhoneBook
{
private:
	ContactData	contact[8];
	int			count;
public:
	PhoneBook();
	~PhoneBook();
	
	void		Start(void);
	void		AddContact(void);
	void		SearchContact(void);
};

#endif