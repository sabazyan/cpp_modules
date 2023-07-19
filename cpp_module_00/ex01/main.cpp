#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook phoneNumber;

	while (1)
	{
		std::cout << "Input a command (ADD, SEARCH or EXIT): ";
		getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD")
			phoneNumber.AddContact();
		else if (command == "SEARCH")
			phoneNumber.SearchContact();
		else if (command == "EXIT")
			return(0);
	}
	return 0;
}