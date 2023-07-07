#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <iostream>
# include <iomanip>
# include <sstream> 
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void AddContact(void);
		void SearchContact(void);
	private:
		Contact Contacts[8];
		int contactIndex;
		int CheckLetters(std::string);
		int CheckDigits(std::string);
		std::string FixLength(std::string);
};

#endif