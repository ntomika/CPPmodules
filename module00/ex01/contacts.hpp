#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ContactData
{
private:
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
public:
	ContactData();
	~ContactData();

	void		FirstName(void);
	void		LastName(void);
	void		Nickname(void);
	void		PhoneNumber(void);
	void		DarkestSecret(void);
	int			GetInfo(void);
	void		CheckSize(std::string name);
	void		PrintAllBook(int index);
};

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