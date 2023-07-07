#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Harl::~Harl(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void Harl::complain(std::string level)
{
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (i = 0; level != levels[i] && i < 4; ++i)
    {}
    i < 4 ? (this->*functions[i])() : error_message();
    return;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming\
for years whereas you started working here since last month." << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return;
}

void Harl::error_message(void)
{
    std::cout << "Correct levels are DEBUG, INFO, WARNING and ERROR" << std::endl;
}