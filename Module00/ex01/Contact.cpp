#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

static std::string getInput(const char *line)
{
	std::cout << line << std::endl;
	std::string	sTmp;

	while (sTmp.empty())
		std::getline(std::cin, sTmp);
	return sTmp;
}

void Contact::setInformation(int index) {
	std::string str;
	this->index = index + 1;

	firstName = getInput("Enter first name:");
	lastName = getInput("Enter last name:");
	nik = getInput("Enter nik:");
	phone = getInput("Enter phone number:");
	secret = getInput("Enter secret:");
}

void Contact::checkLenStr(std::string str) {
	int len ;

	len = str.length();

	std::cout << "|";
	if (len <= 10) {
		for (; len < 10; len++) {
			std::cout << " ";
		}
		std::cout << str;
	} else {
		str = str.substr(0, 9);
		std::cout << str <<".";
	}
}

void Contact::seeCap() {
	std::cout	<< "-----------" << "-----------" << "-----------" << "------------\n"
				 << "|  index   |" << "first name|" << "last name |" << " nickname |\n"
				 << "-----------" << "-----------" << "-----------" << "------------\n";
}

void Contact::seeAllInfornation(Contact contact) {
	std::cout << "|" << "         " << contact.index;
	checkLenStr(contact.firstName);
	checkLenStr(contact.lastName);
	checkLenStr(contact.nik);
	std::cout << "|" <<std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

void Contact::indexInBook(Contact contact) {
	std::cout << "The first name: " << contact.firstName << std::endl;
	std::cout << "The last name: " << contact.lastName << std::endl;
	std::cout << "The nickname: " << contact.nik << std::endl;
	std::cout << "The secret: " << contact.secret << std::endl;
	std::cout << "The phone number: " << contact.phone << std::endl;
}