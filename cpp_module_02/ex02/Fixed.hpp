#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &other);
        ~Fixed(void);

        Fixed &operator = (const Fixed &src);
        bool operator > (const Fixed &ins);
        bool operator < (const Fixed &ins);
        bool operator >= (const Fixed &ins);
        bool operator <= (const Fixed &ins);
        bool operator == (const Fixed &ins);
        bool operator != (const Fixed &ins);
    
        Fixed operator + (const Fixed &ins);
        Fixed operator - (const Fixed &ins);
        Fixed operator * (const Fixed &ins);
        Fixed operator / (const Fixed &ins);

        Fixed &operator ++ (void);
        Fixed operator ++ (int value);
        Fixed &operator -- (void);
        Fixed operator -- (int value);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
    
        static Fixed &min(Fixed &first, Fixed &second);
        static const Fixed &min(const Fixed &first, const Fixed &second);
        static Fixed &max(Fixed &first, Fixed &second);
        static const Fixed &max(const Fixed &first, const Fixed &second);
    
    private:
        int _value;
        static const int _fractCount;
};

std::ostream &operator << (std::ostream &out, const Fixed &in);

#endif