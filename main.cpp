#include "containers/vector.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <vector>

int main(void)
{
    ft::vector<int> tab(5, 4);
    std::vector<int> tab2(5, 4);

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << tab[2] << std::endl;        
    }
    std::cout << "capacity  : " << tab2.capacity() << std::endl;
    std::cout << "size      : " << tab2.max_size() << std::endl;
    
    return (0);
}