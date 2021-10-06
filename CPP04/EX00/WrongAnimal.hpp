#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &wrongcat);
	~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &wrongcat);
	std::string getType() const;
	void	makeSound() const;

protected:
	std::string _type;

private:

};

#endif