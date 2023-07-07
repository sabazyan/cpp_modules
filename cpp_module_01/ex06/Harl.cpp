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
    switch(i)
    {
        case 0:
            (this->*functions[i])();
            ++i;
        case 1:
            (this->*functions[i])();
            ++i;
        case 2:
            (this->*functions[i])();
            ++i;
        case 3:
            (this->*functions[i])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return;
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
        << std::endl << "I really do!" << std::endl << std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money."
        << std::endl << "You didn't put enough bacon in my burger!" <<std::endl
        << "If you did, I wouldn't be asking for more!" << std::endl << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free."
        << std::endl << "I've been coming for years whereas you started working here since last month."
        << std::endl << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now."
        << std::endl << std::endl;
    return;
}