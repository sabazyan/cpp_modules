#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong count of arguments" << std::endl;
		return 0;
	}
	std::ifstream file1;
	std::ofstream file2;
	file1.open(argv[1]);
	file2.open("outputFile.txt");
	if (!file1.is_open() || !file2.is_open())
	{
		std::cout << "Can not open file(s)" << std::endl;
		return 0;
	}
	int argv2_len;
	for (int i = 0; argv[2][i]; ++i)
	{
		argv2_len = i + 1;
	}
	std::string temp_str;
	int old_find_pos;
	int find_pos;
	int other_pos;
	int counter;
	while (getline(file1, temp_str))
	{
		find_pos = temp_str.find(argv[2], 0);
		old_find_pos = 0;
		other_pos = 0;
		counter = 0;
		if (find_pos == -1)
		{
			file2 << temp_str << std::endl;
		}
		else
		{
			while (find_pos != -1)
			{
				if (!old_find_pos && !counter)
				{
					file2 << temp_str.substr(0, find_pos) << argv[3];
					++counter;
				}
				else
				{
					file2 << temp_str.substr(old_find_pos + argv2_len, find_pos - old_find_pos - argv2_len)
						<< argv[3];
				}
				other_pos = find_pos + argv2_len;
				old_find_pos = find_pos;
				find_pos = temp_str.find(argv[2], find_pos + 1);
			}
			file2 << temp_str.substr(old_find_pos + argv2_len) << std::endl;
		}
	}
	file1.close();
	file2.close();
	return 0;
}