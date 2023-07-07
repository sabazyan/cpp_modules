#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong arguments count!" << std::endl;
        return 0;
    }
    Harl harly;
    harly.complain(argv[1]);
    return 0;
}