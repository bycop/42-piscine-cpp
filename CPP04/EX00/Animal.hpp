#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &animal);
	virtual ~Animal();
	Animal &operator=(Animal const &animal);
	std::string getType() const;
	virtual void	makeSound() const;

protected:
	std::string _type;

private:

};

#endif