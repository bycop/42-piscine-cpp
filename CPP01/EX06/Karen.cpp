#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::filter_display(std::string type, t_function func)
{
	std::cout << "[ " << type << " ]" << std::endl;
	(this->*func)();
	std::cout << std::endl;
}

void Karen::complain(std::string level)
{
	t_function func[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string types[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int type = -1;

	for (int i = 0; i < 4; i++)
		if (types[i] == level)
			type = i;

	switch (type)
	{
	case 0:
		filter_display(types[0], func[0]);
	case 1:
		filter_display(types[1], func[1]);
	case 2:
		filter_display(types[2], func[2]);
	case 3:
		filter_display(types[3], func[3]);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}