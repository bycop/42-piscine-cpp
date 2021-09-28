#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
	return;
}

void Contact::set_last_name(std::string str)
{
	this->last_name = str;
	return;
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
	return;
}

void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
	return;
}

void Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
	return;
}

static bool is_number(const std::string s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it))
		++it;
	return !s.empty() && it == s.end();
}

static bool only_spaces(const std::string str)
{
	if (str == "")
		return (1);
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			return (0);
	return (1);
}

static int skip_spaces(const std::string str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			return (i);
	return (0);
}

Contact add_contact(void)
{
	Contact new_contact;
	std::string buffer;

	while (only_spaces(new_contact.get_first_name()))
	{
		std::cout << "First name : ";
		if (!std::getline(std::cin, buffer))
			exit(EXIT_FAILURE);
		buffer.erase(0, skip_spaces(buffer));
		new_contact.set_first_name(buffer);
	}
	while (only_spaces(new_contact.get_last_name()))
	{
		std::cout << "Last name : ";
		if (!std::getline(std::cin, buffer))
			exit(EXIT_FAILURE);
		buffer.erase(0, skip_spaces(buffer));
		new_contact.set_last_name(buffer);
	}
	while (only_spaces(new_contact.get_nickname()))
	{
		std::cout << "Nick name : ";
		if (!std::getline(std::cin, buffer))
			exit(EXIT_FAILURE);
		buffer.erase(0, skip_spaces(buffer));
		new_contact.set_nickname(buffer);
	}
	while (only_spaces(new_contact.get_phone_number()))
	{
		std::cout << "Phone Number : ";
		if (!std::getline(std::cin, buffer))
			exit(EXIT_FAILURE);
		buffer.erase(0, skip_spaces(buffer));
		new_contact.set_phone_number(buffer);
	}
	while (only_spaces(new_contact.get_darkest_secret()))
	{
		std::cout << "Darkest Secret : ";
		if (!std::getline(std::cin, buffer))
			exit(EXIT_FAILURE);
		buffer.erase(0, skip_spaces(buffer));
		new_contact.set_darkest_secret(buffer);
	}
	std::cout << std::endl
			  << "\e[92mContact saved.\e[0m" << std::endl;
	return (new_contact);
}

static void info_contact(Contact phonebook[], int index)
{
	int i;
	std::string str;

	std::cout << "Show info about: ";
	std::getline(std::cin, str);

	if (str.size() > 1)
	{
		std::cout << "Number too big." << std::endl;
		return ;
	}

	if (is_number(str))
		i = std::stoi(str);
	else
	{
		std::cout << "Wrong index. " << std::endl;
		return;
	}

	i -= 1;
	std::cout << std::endl;
	if (std::cin.good() && (i >= 0 && i < index))
	{
		std::cout << "First name : " + phonebook[i].get_first_name() << std::endl;
		std::cout << "Last name : " + phonebook[i].get_last_name() << std::endl;
		std::cout << "Nick name : " + phonebook[i].get_nickname() << std::endl;
		std::cout << "Phone Number : " + phonebook[i].get_phone_number() << std::endl;
		std::cout << "Darkest Secret : " + phonebook[i].get_darkest_secret() << std::endl;
	}
	else
	{
		std::cout << "Wrong index. " << std::endl;
	}
}

void show_all(Contact phonebook[], int index)
{
	std::cout << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << ("Prenom") << "|" << std::setw(10) << "Nom"
			  << "|" << std::setw(10) << "Nickname"
			  << "|" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::string last = phonebook[i].get_last_name();
		std::string first = phonebook[i].get_first_name();
		std::string nick = phonebook[i].get_nickname();
		if (last.size() > 10)
		{
			last.resize(9, ' ');
			last.resize(10, '.');
		}
		if (first.size() > 10)
		{
			first.resize(9, ' ');
			first.resize(10, '.');
		}
		if (nick.size() > 10)
		{
			nick.resize(9, ' ');
			nick.resize(10, '.');
		}
		std::cout << "|" << std::setw(10) << std::to_string(i + 1) << "|" << std::setw(10) << first << "|" << std::setw(10) << last << "|" << std::setw(10) << nick << "|" << std::endl;
	}
	info_contact(phonebook, index);
}