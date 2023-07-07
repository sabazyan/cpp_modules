#include "PhoneBook.hpp"

Contact::Contact(void)
{
	std::cout << "Contact's constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact's destructor called" << std::endl;
	return ;
}

void Contact::SetFirstName(std::string name)
{
	FirstName = name;
	return ;
}

std::string Contact::GetFirstName()
{
	return FirstName;
}

void Contact::SetLastName(std::string name)
{
	LastName = name;
	return ;
}

std::string Contact::GetLastName()
{
	return LastName;
}

void Contact::SetNickname(std::string name)
{
	Nickname = name;
	return ;
}

std::string Contact::GetNickname()
{
	return Nickname;
}

void Contact::SetPhoneNumber(std::string number)
{
	PhoneNumber = number;
	return ;
}

std::string Contact::GetPhoneNumber()
{
	return PhoneNumber;
}

void Contact::SetDarkestSecret(std::string secret)
{
	DarkestSecret = secret;
	return ;
}

std::string Contact::GetDarkestSecret()
{
	return DarkestSecret;
}
