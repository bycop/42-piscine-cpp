#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;
class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &amateria);
		virtual ~AMateria();
		AMateria	&operator=(AMateria const &amateria);


		std::string const &getType() const;
		unsigned int getXP() const;
		virtual void use(ICharacter &target);
		virtual AMateria* 	clone() const = 0;

	protected:
		std::string		_type;
		unsigned int 	_xp;
	};

#endif