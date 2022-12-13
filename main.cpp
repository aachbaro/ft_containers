#include "containers/vector.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>

void    printab(ft::vector<int> const &tab)
{
    std::cout << "-- tab data --" << std::endl;
    std::cout << "size = " << tab.size() << std::endl;
    for (size_t i = 0; i < tab.size(); i++)
    {
        std::cout << tab.at(i) << " | ";
    }
    std::cout << std::endl;   
}

void pointer_func(const int* p, unsigned long size)
{
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; ++i)
        std::cout << p[i] << ' ';
    std::cout << '\n';
}

int main(void)
{
    ft::vector<int> tab(5, 4);
    std::vector<int> tab2(5, 4);


    //printab(tab);
    tab.at(3) = 3;
    //printab(tab);
    tab.back() = 10;
    //printab(tab);
    tab.front() = 0;
    //printab(tab);
    pointer_func(tab.data(), tab.size());
    std::cout << tab.max_size() << std::endl;
    std::cout << tab.size() << std::endl;
    tab.reserve(28);
    pointer_func(tab.data(), tab.size());
    tab.clear();
    std::cout << tab.capacity() << std::endl;
    std::cout << tab.size() << std::endl;
    tab.push_back(8);
    tab.push_back(456);
    tab.pop_back();

    pointer_func(tab.data(), tab.size());
    return (0);
}