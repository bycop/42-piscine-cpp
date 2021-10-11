#include <iostream>
#include <cmath>
#include <limits>

bool 	_isDigitValue(std::string value)
{
	int len = value.length();
	for (int i = 0; i < len; ++i) {
		if ((value[i] == '-' || value[i] == '+') && i == 0)
			continue ;
		else if (value[i] == 'f' && i + 1 == len)
			continue ;
		else if (isdigit(value[i]) || value[i] == '.' || value[i] == ',')
			continue ;
		else
			return (false);
	}
	return (true);
}

bool isSpecial(std::string value)
{
	return (value == "-inff" || value == "+inff" || value == "nanf" || value == "nan" || value == "-inf" || value == "+inf");
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert '<value>'" << std::endl;
		return 1;
	}

	std::string value = av[1];
	double	nbr;

	if (!_isDigitValue(value) && !isSpecial(value))
	{
		if (value.length() != 1)
		{
			std::cout << "Error: unrecognized value" << std::endl;
			return 1;
		}
		else
			nbr = static_cast<double>(value[0]);
	}
	else
		nbr = std::stof(value);

	char c = static_cast<char>(nbr);
	if (isSpecial(value) || nbr > std::numeric_limits<char>::max() || nbr < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (nbr < 32 || nbr >= 127 )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	if (isSpecial(value) || nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	std::cout << "float: " << static_cast<float>(nbr) << (static_cast<bool>(std::fmod(nbr, 1)) ? "f" : ".0f") << std::endl;
	std::cout << "double: " << static_cast<double>(nbr) << (static_cast<bool>(std::fmod(nbr, 1)) ? "" : ".0") << std::endl;
	return 0;
}