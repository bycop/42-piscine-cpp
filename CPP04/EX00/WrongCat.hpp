#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(const WrongCat &wrongcat);
	~WrongCat();
	WrongCat &operator=(WrongCat const &wrongcat);
	void	makeSound() const;

private:

};

#endif