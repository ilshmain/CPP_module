#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int	count;
	int size;
public:
	PhoneBook();
	virtual ~PhoneBook();

	void	start(void);
	void	add(void);
	void	search(void);
};

#endif