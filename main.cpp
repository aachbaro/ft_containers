#include "containers/vector.hpp"
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    ft::vector<int> tab(5, 4);

    std::cout << tab[2] << std::endl;
    return (0);
}