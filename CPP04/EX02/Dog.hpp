#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

public:
	Dog();
	Dog(const Dog &Dog);
	~Dog();
	Dog &operator=(Dog const &dog);
	void	makeSound() const;
	Brain&	getBrain() const;

private:
	Brain* _brain;
};

#endif