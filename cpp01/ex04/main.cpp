#include "Manager.hpp"

int main(int ac , char **av)
{
    if (ac == 4)
    {
        Manager manager(av[1]);
        manager.reader();
        manager.replacer(manager.getdata(), av[2], av[3]);
    }
    else
        std::cout << "\033[1;31m" << "Error: Invalid number of arguments" << "\033[0m" << std::endl;
}