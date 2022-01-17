#include <iostream>
#include <fstream>

void checker(std::ifstream *inf, std::ofstream *outf) {

	if (!inf) {
		std::cout << "Invalid file to read\n";
		inf->close();
		exit(1);
	}
	if (!outf)
	{
		std::cout << "Invalid file to write\n";
		exit(1);
	}
}

void replaceFunc(std::ifstream *inf, std::ofstream *outf, std::string find, std::string change) {
	std::string strInput;
	size_t pos;

	while (getline(*inf, strInput))
	{
		pos = 0;
		for (;;)
		{
			pos = strInput.find(find, pos);
			if (pos == std::string::npos)
				break;
			strInput.replace(pos, find.size(), change);
		}
		*outf << strInput << std::endl;
	}
}

int main(int argc, char **argv) {
	std::string one;
	std::string two;

	if (argc == 4) {
		one =  = argv[1];
		two = ".replace";
		std::ifstream inf(argv[1]);
		std::ofstream outf(one + two);
		checker(&inf, &outf);
		replaceFunc(&inf, &outf, argv[2], argv[3]);
		inf.close();
	} else {
		std::cerr << "argc != 4" << std::endl;
	}
}