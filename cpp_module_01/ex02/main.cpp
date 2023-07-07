#include <iostream>

int main()
{
	std::string my_str = "HI THIS IS BRAIN";
	std::string *stringPTR = &my_str;
	std::string &stringREF = my_str;
	std::cout << "The memory address of the string variable is \t" << &my_str << std::endl
		<< "The memory address held by stringPTR is \t" << stringPTR << std::endl
		<< "The memory address held by stringREF is \t" << &stringREF << std::endl;
	std::cout << "The value of the string variable is \t" << my_str << std::endl
		<< "The value pointed to by stringPTR is \t" << *stringPTR << std::endl
		<< "The value pointed to by stringREF is \t" << stringREF << std::endl;
}