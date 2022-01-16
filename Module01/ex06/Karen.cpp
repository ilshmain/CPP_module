#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void Karen::debug() {
	std::cout << "[DEBUG]" << std::endl;
	std::cout	<< "I love to get extra bacon for my "
					"7XL-double-cheese-triple-pickle-special-ketchup "
					"burger. I just love it!" << std::endl;
}

void Karen::info() {
	std::cout << "[INFO]" << std::endl;
	std::cout	<< "I cannot believe adding extra bacon cost more money. "
					"You don’t put enough! If you did I would not "
					"have to ask for it!" << std::endl;
}

void Karen::warning() {
	std::cout << "[WARNING]" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon for free. "
					"I’ve been coming here for years and you just "
					"started working here last month." << std::endl;
}

void Karen::error() {
	std::cout << "[ERROR]" << std::endl;
	std::cout	<< "This is unacceptable, "
					"I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	int i = 0;
	void (Karen::*fcnPtr[4])(void) = {&Karen::debug,
									  &Karen::info,
									  &Karen::warning,
									  &Karen::error};
	std::string array[4] = {"debug", "info", "warning", "error"};
	while (i < 4 && level != array[i])
		i++;
	switch (i)
	{
		case 0:
			(this->*fcnPtr[0])();
		case 1:
			(this->*fcnPtr[1])();
		case 2:
			(this->*fcnPtr[2])();
		case 3:
			(this->*fcnPtr[3])();
			break;
		default:
			std::cout << "invalid level" << std::endl;
	}

}