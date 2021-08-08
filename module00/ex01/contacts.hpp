#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
#include <string>
#include <iomanip>

class ContactData
{
private:
	std::string		arr_info[5];
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
public:
	int			index;
	void		FirstName(void);
	void		LastName(void);
	void		Nickname(void);
	void		PhoneNumber(void);
	void		DarkestSecret(void);
	void		PrintAllBook(void);
	void		GetInfo(void);
	void		CheckSize(std::string name);
};

class PhoneBook
{
private:
	ContactData	contact[9];
	int			list;
public:
	int			count;
	void		AddContact(void);
	void		SearchContact(void);
};

#endif