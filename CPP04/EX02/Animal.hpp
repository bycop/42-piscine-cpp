#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

public:
	Animal();
	Animal(const Animal &animal);
	virtual ~Animal();
	Animal &operator=(Animal const &animal);
	std::string getType() const;
	virtual void	makeSound() const = 0;

protected:
	std::string _type;

private:

};

#endif