#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook's constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook's destuctor called" << std::endl;
	return ;
}

void PhoneBook::AddContact(void)
{
	std::string temp[5];
	
	Label_firstName:
	std::cout << "First name: ";
	getline(std::cin, temp[0]);
	if(std::cin.eof())
		return ;
	if (CheckLetters(temp[0]))
	{
		std::cout << "Invalid First name" << std::endl;
		goto Label_firstName;
	}
	Label_lastName:
	std::cout << "Last name: ";
	getline(std::cin, temp[1]);
	if(std::cin.eof())
		return ;
	if (CheckLetters(temp[1]))
	{
		std::cout << "Invalid Last name" << std::endl;
		goto Label_lastName;
	}
	std::cout << "Nickname: ";
	getline(std::cin, temp[2]);
	if(std::cin.eof())
		return ;
	Label_phoneNumber:
	std::cout << "Phone number: ";
	getline(std::cin, temp[3]);
	if(std::cin.eof())
		return ;
	if (CheckDigits(temp[3]))
	{
		std::cout << "Invalid Phone number" << std::endl;
		goto Label_phoneNumber;
	}
	std::cout << "Darkest secret: ";
	getline(std::cin, temp[4]);
	if(std::cin.eof())
		return ;
	if (contactIndex == 8)
		contactIndex = 0;
	Contacts[contactIndex].SetFirstName(temp[0]);
	Contacts[contactIndex].SetLastName(temp[1]);
	Contacts[contactIndex].SetNickname(temp[2]);
	Contacts[contactIndex].SetPhoneNumber(temp[3]);
	Contacts[contactIndex].SetDarkestSecret(temp[4]);
	++contactIndex;
	std::cout << "Done!" << std::endl;
	return ;
}

void PhoneBook::SearchContact(void)
{
	int index;
	std::string inputedIndex;

	for (int i = 0; i < 8; ++i)
	{
		if (Contacts[i].GetFirstName() != "")
		{
			std::cout << "|" << std::setw(10) << i << "|"
				<< std::setw(10) << FixLength(Contacts[i].GetFirstName()) << "|"
				<< std::setw(10) << FixLength(Contacts[i].GetLastName()) << "|"
				<< std::setw(10) << FixLength(Contacts[i].GetNickname()) << "|" << std::endl;
		}
	}
	std::cout << "Choose a valid index: ";
	getline(std::cin, inputedIndex);
	if(std::cin.eof())
		return ;
	if (CheckDigits(inputedIndex))
	{
		std::cout << inputedIndex << " is not a valid index" << std::endl;
		return ;
	}
	std::stringstream ss(inputedIndex);
	ss >> index;
	if (index > contactIndex)
	{
		std::cout << "There is no contact with index " << index << std::endl;
		return ;
	}
	if (Contacts[index].GetFirstName() != "")
	{
		std::cout << "First name:\t" << Contacts[index].GetFirstName() << std::endl
			<< "Last name:\t" << Contacts[index].GetLastName() << std::endl
			<< "Nickname:\t" << Contacts[index].GetNickname() << std::endl
			<< "Phone number:\t" << Contacts[index].GetPhoneNumber() << std::endl
			<< "Darkest secret:\t" << Contacts[index].GetDarkestSecret() << std::endl;
	}
	else
		std::cout << "There is no contact with index " << index << std::endl;
	return ;
}

int PhoneBook::CheckLetters(std::string name)
{
	int len = name.length();

	for (int i = 0; i < len; ++i)
		if ((name[i] < 65) || (name[i] > 90 && name[i] < 97) || (name[i] > 122))
			return -1;
	return 0;
}

int PhoneBook::CheckDigits(std::string number)
{
	int len = number.length();

	for (int i = 0; i < len; ++i)
		if (number[i] < 48 || number[i] > 57)
			return -1;
	return 0;
}

std::string PhoneBook::FixLength(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str = str.replace(9, 1, ".");
	}
	return str;
}