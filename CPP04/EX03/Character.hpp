#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;
class Character: public ICharacter
{
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &character);
		Character	&operator=(Character const &character);
		virtual ~Character();

		int	getNbMateria(void) const;

		std::string const &getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria    *_materia[4];
		int         _nbMateria;
};

#endif