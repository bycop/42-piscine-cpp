#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./a.out <filename> <string_to_replace> <string_replace>" << std::endl;
		return (1);
	}

	std::ifstream input_file;

	input_file.open(av[1], std::ifstream::in);

	if (input_file)
	{
		input_file.seekg(0, input_file.end);
		int length = input_file.tellg();
		input_file.seekg(0, input_file.beg);
		char *buffer = new char[length];
		input_file.read(buffer, length);
		buffer[length] = '\0';
		input_file.close();

		std::string buf = buffer;
		std::string res;

		int found = 0;
		int save = 0;
		int i = 0;

		found = buf.find(av[2], 0);

		while (found != -1 && ++i)
		{
			res += buf.substr(save, found - save);
			res += av[3];
			save = found + std::strlen(av[2]);
			found = buf.find(av[2], found + i);
		}
		if (i == 0)
			res = buf;
		else
			res += buf.substr(save, length - save);

		std::ofstream output_file(std::strcat(av[1], ".replace"));

		output_file << res;

		output_file.close();

		delete[] buffer;
	}
}