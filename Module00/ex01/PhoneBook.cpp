#include "PhoneBook.hpp"

void PhoneBook::start() {
	std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
}

PhoneBook::PhoneBook() {
	this->count = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	this->count = this->count == 8  ? 0 : this->count;
	contact[this->count].setInformation(this->count);
	this->count++;
}

void PhoneBook::search() {
	int sum;
	bool run;
	int value;
	std::string index;

	run = true;
	if (this->count == 0) {
		std::cout << "The phone book is empty, please add people" << std::endl;
		return;
	}
	contact->seeCap();

	this->size = this->count == 8 ? 1 : this->size;
	sum = this->size == 1 ? 7 : this->count;

	for (int i = 0; i < sum; i++) {
		contact->seeAllInfornation(contact[i]);
	}

	std::cout << "Enter an index contact: ";
	while (run) {
		std::getline(std::cin, index);
		try {
			value = std::stoi(index);
			if (value < 9 && (((value <= this->count && value > 0) || this->size == 1))) {
				contact->indexInBook(contact[std::stoi(index) - 1]);
				run = false;
			}
		} catch (std::invalid_argument e){}
		if (run) {
			std::cout << "Enter a correct index please: ";
		}
	}
}
