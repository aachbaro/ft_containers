#include "containers/vector.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>

void    printab(ft::vector<int> tab)
{
    std::cout << "-- tab data --" << std::endl;
    std::cout << "size = " << tab.size() << std::endl;
    for (size_t i = 0; i < tab.size(); i++)
    {
        std::cout << tab.at(i) << " | ";
    }
    std::cout << std::endl;   
}

int main(void)
{
    ft::vector<int> tab(5, 4);
    std::vector<int> tab2(5, 4);


    printab(tab);
    tab.at(3) = 3;
    printab(tab);
    tab.back() = 10;
    printab(tab);


    std::cout << "capacity  : " << tab2.capacity() << std::endl;
    std::cout << "size      : " << tab2.max_size() << std::endl;
    
    return (0);
}