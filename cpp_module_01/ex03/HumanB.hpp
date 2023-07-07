#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void);
	private:
		Weapon *_weapon;
		std::string _name;
};

#endif
