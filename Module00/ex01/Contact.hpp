#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	int			index;
	std::string	firstName;
	std::string lastName;
	std::string nik;
	std::string phone;
	std::string secret;

public:
	Contact();
	~Contact();

	void indexInBook(Contact contact);
	void setInformation(int index);
	void seeCap();
	void checkLenStr(std::string str);
	void seeAllInfornation(Contact contact);
};

#endif