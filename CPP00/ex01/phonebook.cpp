#include "Contact.hpp"

namespace Functions
{
	void menu(int type)
	{
		if (type == 1)
			std::cout << "\e[31mWelcome on PhoneBook 2.0\e[0m" << std::endl;
		if (type == 2)
			std::cout << "\e[31mWrong command !\e[0m" << std::endl;
		std::cout << "List of \e[92mavailable \e[0mcommands:" << std::endl;
		std::cout << "\e[93mEXIT \e[0m- \e[34mExit the program" << std::endl;
		std::cout << "\e[93mADD \e[0m- \e[34mAdd a contact" << std::endl;
		std::cout << "\e[93mSEARCH \e[0m- \e[34mSearch a contact\e[0m" << std::endl;
	}
}

int main()
{
	std::string str = "";
	Contact contacts[9];
	int i;
	i = 0;

	Functions::menu(1);
	while (std::getline(std::cin, str))
	{
		if (str == "ADD")
		{
			if (i >= 8)
				std::cout << "PhoneBook Full !!!" << std::endl;
			else
				contacts[i++] = add_contact();
		}
		else if (str == "SEARCH")
		{
			if (i == 0)
				std::cout << "PhoneBook Empty !!!" << std::endl;
			else
				show_all(contacts, i);
		}
		else if (str == "EXIT")
		{
			std::cout << "\e[31mBye \e[93mBye \e[0m👋" << std::endl;
			break;
		}
		else
		{
			Functions::menu(2);
		}
		Functions::menu(3);
	}
	return (0);
}