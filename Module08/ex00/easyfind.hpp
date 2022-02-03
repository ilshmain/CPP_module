#include <iostream>
#include <vector>
#include <algorithm>

#define DEFAULT		"\033[0m"
#define RED			"\033[31m"

template<typename T>
typename T::iterator easyfind(T &vect, int num)
{
    std::vector<int>::iterator it;
    it = std::find(vect.begin(), vect.end(), num);
    if (it != vect.end())
        return it;
    throw std::exception();
}