#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void set_first_name(std::string);
		void set_last_name(std::string);
		void set_nickname(std::string);
		void set_phone_number(std::string);
		void set_darkest_secret(std::string);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string get_phone_number(void);
		std::string get_darkest_secret(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

Contact	add_contact(void);
void	show_all(Contact phonebook[], int index);

#endif