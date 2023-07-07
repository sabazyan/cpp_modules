#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void SetFirstName(std::string);
		std::string GetFirstName();
		void SetLastName(std::string);
		std::string GetLastName();
		void SetNickname(std::string);
		std::string GetNickname();
		void SetPhoneNumber(std::string);
		std::string GetPhoneNumber();
		void SetDarkestSecret(std::string);
		std::string GetDarkestSecret();
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
};

#endif
