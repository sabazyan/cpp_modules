#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void) const;
		void setType(std::string);
	private:
		std::string type;
};

#endif