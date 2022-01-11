#include <iostream>

int main(int argc, char ** argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for (int i = 1; i < argc; i++) {
			for (size_t q = 0; q < strlen(argv[i]); q++) {
				std::cout << (char)toupper(argv[i][q]);
			}
		}
		std::cout << std::endl;
	}
	return 0;
}