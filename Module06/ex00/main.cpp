#include <iostream>

int	main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Invalid argc " << std::endl;
        return (1);
    }
    std::cout.precision(1);
    std::cout << std::fixed;

    if (strcmp(argv[1], "-inf") == 0 || strcmp(argv[1], "+inf") == 0 || strcmp(argv[1], "nan") == 0 ||
        strcmp(argv[1], "-inff") == 0 || strcmp(argv[1], "+inff") == 0 || strcmp(argv[1], "nanf") == 0)
    {
        int i = 5;
        if (strlen(argv[1]) == 5)
            i = 4;
        if (argv[1][0] == 'n')
            i = 3;
        std::string new_str = ((std::string)argv[1]).substr(0, i);

        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << new_str << "f" << std::endl;
        std::cout << "double: " << new_str << std::endl;
        return (0);
    }

    try
    {
        int i = static_cast<char>(std::atoi(argv[1]));
        if (!std::isprint(i))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    } catch (std::exception &exception)
    {
        std::cout << "char: impossible" << std::endl;
    }

    try
    {
        int i = std::stoi(argv[1]);
        std::cout << "int: " << i << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << "int: impossible" << std::endl;
    }

    try
    {
        float f = std::stof(argv[1]);
        std::cout << "float: " << f << "f" << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << "float: impossible" <<std:: endl;
    }

    try
    {
        double d = std::stod(argv[1]);
        std::cout << "double: " << d << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << "double: impossible" <<std:: endl;
    }
}