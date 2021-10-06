#ifndef MATERIASOURCE_HPP
 #define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource();

		MateriaSource &operator=(MateriaSource const &src);

		void 		learnMateria(AMateria *m);
		AMateria* 	createMateria(std::string const &type);
	private:
		int 		_nb;
		AMateria 	*_materias[4];
};

#endif


