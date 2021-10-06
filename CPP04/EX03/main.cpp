#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src2 = new MateriaSource();
	ICharacter *joe = new Character("joe");
    AMateria *cure;
    AMateria *ice;

	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	ice = src2->createMateria("ice");
	cure = src2->createMateria("cure");

 	joe->equip(ice);
 	joe->equip(cure);
	
	ICharacter* mike = new Character("mike");

	std::cout << "ice xp :" << ice->getXP() << std::endl;
	std::cout << "cure xp :" << cure->getXP() << std::endl;

	joe->use(0, *mike);
	joe->use(1, *mike);
	joe->use(1, *mike);

	std::cout << "ice xp :" << ice->getXP() << std::endl;
	std::cout << "cure xp :" << cure->getXP() << std::endl;

	delete src2;
	delete joe;
	delete mike;
	return 0;
}