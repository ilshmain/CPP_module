#include "PhoneBook.hpp"

int main()
{
	std::string str;
	PhoneBook phoneBook;

	for (;;) {
		phoneBook.start();
		std::getline(std::cin, str);
		if (str == "EXIT")
			return 1;
		else if (str == "ADD")
			phoneBook.add();
		else if (str == "SEARCH")
			phoneBook.search();
		else {
			std::cout << "Please enter the correct field" <<std::endl;
		}
	}
}