#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *j[100];
	for (int i = 0; i < 100; i++)
	{
		if (i % 2)
			j[i] = new Dog();
		else
			j[i] = new Cat();
		j[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
		delete j[i];
	Dog dog1 = Dog();
	dog1.getBrain().setIdea(0, "Bonjour");
	dog1.getBrain().setIdea(1, "Bonsoir");
	dog1.getBrain().displayIdeas();
	Dog dog2 = dog1;
	dog2.getBrain().displayIdeas();
	dog2.getBrain().setIdea(0, "bijour");
	dog2.getBrain().setIdea(1, "bisoir");
	dog2.getBrain().displayIdeas();
	dog1.getBrain().displayIdeas();

}