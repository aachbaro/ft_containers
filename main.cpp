#include "containers/vector.hpp"
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

int main(void)
{
    ft::vector<int> tab(5, 4);

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << tab[2] << std::endl;        
    }
    
    return (0);
}