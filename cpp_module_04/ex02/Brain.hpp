#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "iostream"

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &);
        Brain &operator = (const Brain &);
        ~Brain(void);
    private:
        std::string _ideas[100];
};

#endif