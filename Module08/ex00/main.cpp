#include "easyfind.hpp"

void print(std::vector<int>::iterator v_it, std::vector<int> &vector) {
    while (v_it != vector.end()) {
        std::cout << *v_it << " ";
        v_it++;
    }
    std::cout << std::endl;
}

int main()
{
    {
        try
        {
            std::vector<int> vector;
            std::vector<int>::iterator v_it;
            int num = 3;
            for (int i = 0; i < 10; ++i)
                vector.push_back(i);
            for (v_it = vector.begin(); v_it != vector.end(); ++v_it)
                std::cout << *v_it << ' ';
            std::cout << "\nsearch = " << num << std::endl;
            v_it = easyfind(vector, num);
            print(v_it, vector);

        }
        catch (std::exception &e) {
            std::cerr << RED << "Not found" << DEFAULT << std::endl;
        }
    }
    std::cout << std::endl;
    {
        try
        {
            std::vector<int> vector;
            std::vector<int>::iterator v_it;
            int num = 13;
            for (int i = 0; i < 10; ++i)
                vector.push_back(i);
            for (v_it = vector.begin(); v_it != vector.end(); ++v_it)
                std::cout << *v_it << ' ';
            std::cout << "\nsearch = " << num << std::endl;
            v_it = easyfind(vector, num);
            print(v_it, vector);
        }
        catch (std::exception &e) {
            std::cerr << RED << "Not found" << DEFAULT << std::endl;
        }
    }
}